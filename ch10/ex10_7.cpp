/**
 * Created by Linus Zhang on 2023/4/6.
 */
#include <vector>
#include <list>
#include <iostream>

using std::vector, std::list;

int main()
{
  // (a)
  vector<int> vec;
  list<int> lst;
  int i;

  while (std::cin >> i) {
    lst.push_back(i);
  }

//  std::copy(lst.cbegin(), lst.cend(), vec.begin());

  // Fixed: the vec.begin() was replaced by a back_inserter iterator, capable of
  // insert new elements automatically at the end of the container.
  std::copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));

  // (b)
  vector<int> v;
  v.reserve(10);
  fill_n(v.begin(), 10, 0);
  // ^ (b)No error, but not any sense. v.size() still equal zero.
  // Fixed: 1. use `v.resize(10);`
  //    or  2. use `fill_n(std::back_inserter(v), 10, 0)`
}
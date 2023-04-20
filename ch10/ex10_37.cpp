/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <vector>
#include <iostream>
#include <list>

int main()
{
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::list<int> ret_lst(8 - 3);
  std::copy(vec.cbegin() + 3, vec.cbegin() + 8, ret_lst.rbegin());

  for (auto i: ret_lst) {
    std::cout << i << " ";
  }

  return 0;
}
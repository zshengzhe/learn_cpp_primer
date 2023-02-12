/**
 * Created by Linus Zhang on 2023/2/7.
 */
#include <iostream>
#include <vector>

using std::vector;

void print_one(vector<int>::const_iterator begin, vector<int>::const_iterator end)
{
  if (begin != end) {
    std::cout << *begin << " ";
    print_one(++begin, end);
  }
}

int main()
{
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  print_one(vec.cbegin(), vec.cend());

  return 0;
}
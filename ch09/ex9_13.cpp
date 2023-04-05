/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <iostream>
#include <vector>
#include <list>

int main()
{
  std::list<int> list1{1, 2, 3, 4, 5, 6};
  std::vector<int> vector(list1.cbegin(), list1.cend());
  for (auto i: vector) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::list<int> list2(vector.cbegin(), vector.cend());
  for (auto i: list2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
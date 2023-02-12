/**
 * Created by Linus Zhang on 2023/2/7.
 */
#include <iostream>

int add_all(std::initializer_list<int> arr)
{
  int result = 0;
  for (auto i: arr) {
    result += i;
  }

  return result;
}

int main()
{
  std::initializer_list<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::cout << add_all(arr) << std::endl;

  return 0;
}
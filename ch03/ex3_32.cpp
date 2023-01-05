/**
 * Created by Linus Zhang on 2023/1/4.
 */
#include <iostream>
#include <vector>

int main()
{
  int arr0[10], arr1[10];
  std::vector<int> vec0(10);

  for (auto i = 0; i < 10; i++) {
    arr0[i] = i;
  }

  for (auto i = 0; i < 10; i++) {
    arr1[i] = arr0[i];
  }

  for (auto i = 0; i < 10; i++) {
    vec0[i] = arr0[i];
  }

  std::cout << "original array: ";
  for (auto i: arr0) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::cout << "copied array:   ";
  for (auto i: arr1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::cout << "copied vector0: ";
  for (auto i: vec0) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::vector<int> vec1(vec0);
  std::cout << "copied vector1: ";
  for (auto i: vec1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/1/4.
 */
#include <iostream>

int main()
{
  int arr_size = 10;
  int arr[arr_size];
  for (auto i = 0; i < arr_size; i++) {
    arr[i] = i;
  }

  for (auto i: arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
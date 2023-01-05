/**
 * Created by Linus Zhang on 2023/1/4.
 */
#include <iostream>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int *begin = std::begin(arr);
  int *end = std::end(arr);

  while (begin != end) {
    *(begin++) = 0;
  }

  for (auto i: arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
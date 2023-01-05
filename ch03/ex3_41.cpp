/**
 * Created by Linus Zhang on 2023/1/5.
 */
#include <iostream>
#include <vector>

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  std::vector<int> vector(std::begin(arr), std::end(arr));

  for (auto i: vector) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
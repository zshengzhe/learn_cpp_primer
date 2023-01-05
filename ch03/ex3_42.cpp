/**
 * Created by Linus Zhang on 2023/1/5.
 */
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> vec{1, 2, 3, 4, 5};
  int arr[vec.size()];
  for (decltype(vec.size()) index = 0; index < vec.size(); index++) {
    arr[index] = vec[index];
  }

  for (auto i: arr) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
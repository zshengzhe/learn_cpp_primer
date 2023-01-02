/**
 * Created by Linus Zhang on 2023/1/1.
 */
#include <vector>
#include <iostream>

using std::vector;

int main()
{
  vector<int> vec;
  for (int i = 0; std::cin >> i; vec.push_back(i));

  if (vec.empty()) {
    std::cout << "input at least one integer." << std::endl;
    return -1;
  }

  for (decltype(vec.size()) index = 0; index != vec.size(); index++) {
    if (index + 1 < vec.size()) {
      std::cout << vec[index] + vec[index + 1] << std::endl;
    } else {
      std::cout << vec[index] << std::endl;
    }
  }

  return 0;
}
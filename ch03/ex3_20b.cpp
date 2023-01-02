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

  for (decltype(vec.size()) low = 0, high = vec.size() - 1; low != high; low++, high--) {
    std::cout << vec[low] + vec[high] << std::endl;
  }

  return 0;
}
/**
 * Created by Linus Zhang on 2023/1/2.
 */
#include <iostream>
#include <vector>

using std::vector;

int main()
{
  vector<int> vec;

  for (int buffer = 0; std::cin >> buffer; vec.push_back(buffer));

  if (vec.size() < 2) {
    std::cout << "please enter at least two integers" << std::endl;
    return -1;
  }

  for (auto it = vec.cbegin(), end = vec.cend(); it + 1 != end; it++) {
    std::cout << *it + (*(it + 1)) << " ";
  }

  return 0;
}
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

  for (auto left = vec.cbegin(), right = vec.cend(); left != right; left++, right--) {
    std::cout << *left + *right << " ";
  }

  return 0;
}
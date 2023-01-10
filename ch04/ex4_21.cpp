/**
 * Created by Linus Zhang on 2023/1/9.
 */
#include <iostream>
#include <vector>

using std::vector;

int main()
{
  vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto i: vec) {
    std::cout << (i & 0x1 ? (2 * i) : i) << " ";
  }
  std::cout << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/17.
 */
#include <iostream>
#include <vector>

int main()
{
  std::istream_iterator<int> itr(std::cin), eof;
  std::vector<int> vec(itr, eof);

  std::sort(vec.begin(), vec.end());
  for (auto i: vec) {
    std::cout << i << " ";
  }

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/17.
 */
#include <iostream>
#include <vector>

int main()
{
  std::istream_iterator<int> itr(std::cin), eof;
  std::vector<int> vec(itr, eof);

  std::vector<int> result;
  std::unique_copy(vec.cbegin(), vec.cend(), std::back_inserter(result));
  std::sort(result.begin(), result.end());
  for (auto i: result) {
    std::cout << i << " ";
  }

  return 0;
}
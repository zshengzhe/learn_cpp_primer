/**
 * Created by Linus Zhang on 2023/3/28.
 */
#include <deque>
#include <string>
#include <iostream>

int main()
{
  std::deque<std::string> input;

  for (std::string buffer; std::cin >> buffer;) {
    input.push_back(buffer);
  }

  for (auto begin = input.cbegin(), end = input.cend(); begin != end; begin++) {
    std::cout << *begin << std::endl;
  }

  return 0;

}
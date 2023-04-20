/**
 * Created by Linus Zhang on 2023/4/6.
 */
#include <vector>
#include <string>
#include <iostream>

bool length_ge_5(const std::string &str)
{
  return str.length() >= 5;
}

int main()
{
  std::vector<std::string> v{"a", "ab", "abc", "abcd", "abcde", "abcdef"};
  auto itr = std::partition(v.begin(), v.end(), length_ge_5);

  for (auto begin = v.cbegin(); begin != itr; begin++) {
    std::cout << *begin << " ";
  }
  std::cout << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/6.
 */
#include <string>
#include <vector>
#include <iostream>

bool isShort(const std::string &s1, const std::string &s2)
{
  return s1.size() < s2.size();
}

int main()
{
  std::vector<std::string> v{"4444", "1", "22", "55555", "333"};
  std::sort(v.begin(), v.end(), isShort);

  for (auto &str: v) {
    std::cout << str << " ";
  }

  return 0;
}
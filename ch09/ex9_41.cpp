/**
 * Created by Linus Zhang on 2023/4/3.
 */
#include <vector>
#include <string>
#include <iostream>

int main()
{
  std::string str{"hello"};
  std::vector<char> vec;
  for (auto &c: str) {
    vec.push_back(c);
  }

  std::string str2(vec.begin(), vec.end());

  std::cout << std::boolalpha << (str == str2) << std::endl;

  return 0;
}
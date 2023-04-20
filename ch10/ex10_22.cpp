/**
 * Created by Linus Zhang on 2023/4/9.
 */
#include <iostream>
#include <vector>
#include <string>

auto bigger_than_num(const std::string &s, std::size_t sz) -> long
{
  return s.size() > sz;
}

int main()
{
  std::vector<std::string> v{"linus", "1234567", "1234567", "1234567", "1234567"};
  std::cout << std::count_if(v.cbegin(), v.cend(), std::bind(bigger_than_num, std::placeholders::_1, 6)) << std::endl;

  return 0;
}
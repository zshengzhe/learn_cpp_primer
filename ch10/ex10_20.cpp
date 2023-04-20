/**
 * Created by Linus Zhang on 2023/4/9.
 */
#include <iostream>
#include <vector>
#include <string>

auto bigger_than_6(std::vector<std::string> const &v) -> long
{
  return std::count_if(v.begin(), v.end(), [](const std::string &s) -> bool {
    return s.size() > 6;
  });
}

int main()
{
  std::vector<std::string> v{"linus", "1234567", "1234567", "1234567", "1234567"};

  std::cout << bigger_than_6(v) << std::endl;

  return 0;
}
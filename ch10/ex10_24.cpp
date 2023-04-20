/**
 * Created by Linus Zhang on 2023/4/9.
 */
#include <string>
#include <iostream>
#include <vector>

auto check_size(const std::string &str, size_t sz) -> bool
{
  return str.size() < sz;
}

int main()
{
  std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
  std::string str("123456");

  auto result = find_if(vec.begin(), vec.end(), std::bind(check_size, str, std::placeholders::_1));

  if (result != vec.end())
    std::cout << *result << std::endl;
  else
    std::cout << "Not found" << std::endl;

  return 0;
}
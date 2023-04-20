/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <vector>
#include <iostream>
#include <string>

int main()
{
  std::vector<std::string> vec{"a1", "b2", "c3"};
  for (auto rit = vec.crbegin(); rit != vec.crend(); ++rit) {
    std::cout << *rit << " ";
  }

  return 0;
}
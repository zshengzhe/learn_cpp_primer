/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <vector>
#include <iostream>
#include <string>

int main()
{
  std::vector<std::string> vec{"a1", "b2", "c3"};
  for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
    std::cout << *it << " ";
  }

  return 0;
}
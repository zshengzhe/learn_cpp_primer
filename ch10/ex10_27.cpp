/**
 * Created by Linus Zhang on 2023/4/10.
 */
#include <iostream>
#include <vector>
#include <list>
#include <string>

int main()
{
  std::vector<std::string> v{"a", "a", "b", "b", "c", "d"};
  std::list<std::string> lst;
  std::unique_copy(v.cbegin(), v.cend(), std::back_inserter(lst));

  for (auto &s: lst) {
    std::cout << s << std::endl;
  }

  return 0;
}
/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <list>
#include <vector>
#include <string>

int main()
{
  std::list<const char *> list{"hello", "world"};
  std::vector<std::string> vec;
  vec.assign(list.cbegin(), list.cend());

  return 0;
}
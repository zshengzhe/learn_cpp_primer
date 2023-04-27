/**
 * Created by Linus Zhang on 2023/4/23.
 */
#include <iostream>
#include <map>

int main()
{
  std::map<int, std::string> m = {{1, "a"}, {2, "b"}};
  using KeyType = std::map<int, std::string>::key_type;

  std::cout << "type to subscript: " << typeid(KeyType).name() << std::endl;
  std::cout << "returned from the subscript operator: " << typeid(decltype(m[1])).name() << std::endl;

  return 0;
}
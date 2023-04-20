/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <list>
#include <iostream>

int main()
{
  std::list<int> lst{1, 2, 0, 4, 5, 0, 7, 8, 9, 10, 11};
  auto found_0 = std::find(lst.crbegin(), lst.crend(), 0);
  std::cout << std::distance(found_0, lst.crend()) << std::endl;

  return 0;
}
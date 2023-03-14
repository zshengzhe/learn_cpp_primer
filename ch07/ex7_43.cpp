/**
 * Created by Linus Zhang on 2023/2/16.
 */
#include "ex7_43.h"
#include <vector>

void print_NoDefault(const NoDefault &nd)
{
  std::cout << nd.value << std::endl;
}

void print_C(const C &c)
{
  print_NoDefault(c.no_default);
}

int main()
{
  std::vector<C> vec(10);
  for (auto c: vec) {
    print_C(c);
  }
  return 0;
}
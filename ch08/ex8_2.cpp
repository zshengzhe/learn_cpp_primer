/**
 * Created by Linus Zhang on 2023/3/14.
 */
#include "ex8_1.h"

int main()
{
  std::istream &is = foo(std::cin);
  std::cout << is.rdstate() << std::endl;

  return 0;
}
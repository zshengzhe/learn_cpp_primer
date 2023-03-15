/**
 * Created by Linus Zhang on 2023/3/15.
 */
#include "ex8_1.h"
#include <sstream>

int main()
{
  std::istringstream is("abcdefg hijklmn opq rst uvw xyz");
  foo(is);

  return 0;
}
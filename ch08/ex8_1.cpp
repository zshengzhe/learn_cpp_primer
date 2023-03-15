/**
 * Created by Linus Zhang on 2023/3/14.
 */
#include "ex8_1.h"

std::istream &foo(std::istream &is)
{
  std::string buffer;
  while (is >> buffer) {
    std::cout << buffer << std::endl;
  }
  is.clear();
  return is;
}
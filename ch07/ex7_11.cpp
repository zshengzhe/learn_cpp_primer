/**
 * Created by Linus Zhang on 2023/2/13.
 */
#include "ex7_11.h"

int main()
{
  Sales_data s1;
  print(std::cout, s1) << std::endl;

  Sales_data s2("hello c++");
  print(std::cout, s2) << std::endl;

  Sales_data s3("hello c++", 10, 19.8);
  print(std::cout, s3) << std::endl;

  Sales_data s4(std::cin);
  print(std::cout, s4) << std::endl;

  return 0;
}
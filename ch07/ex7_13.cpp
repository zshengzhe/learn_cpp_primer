/**
 * Created by Linus Zhang on 2023/2/12.
 */
#include <iostream>
#include <string>
#include "ex7_12.h"

int main()
{
  Sales_data total(std::cin);
  if (!total.isbn().empty()) {
    std::istream &is = std::cin;
    while (is) {
      Sales_data trans(is);
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }
  return 0;
}
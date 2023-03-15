/**
 * Created by Linus Zhang on 2023/3/14.
 */
#include <iostream>
#include <fstream>
#include "../ch07/ex7_26.h"

int main(int argc, char **argv)
{
  if (argc < 2) {
    std::cout << "usage: command filename" << std::endl;
    throw std::runtime_error("missing parameter");
  }
  std::ifstream ifs(argv[1]);

  Sales_data total;
  if (read(ifs, total)) {
    Sales_data trans;
    while (read(ifs, trans)) {
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print(std::cout, total) << std::endl;
        total = trans;
      }
    }
    print(std::cout, total) << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
  }

  return 0;
}
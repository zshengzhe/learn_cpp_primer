/**
 * Created by Linus Zhang on 2023/3/14.
 */
#include <iostream>
#include <fstream>
#include "../ch07/ex7_26.h"

int main(int argc, char **argv)
{
  if (argc < 3) {
    std::cout << "usage: command input_filename output_filename" << std::endl;
    throw std::runtime_error("missing parameter");
  }
  std::ifstream ifs(argv[1]);
  std::ofstream ofs(argv[2]);

  Sales_data total;
  if (read(ifs, total)) {
    Sales_data trans;
    while (read(ifs, trans)) {
      if (total.isbn() == trans.isbn())
        total.combine(trans);
      else {
        print(ofs, total) << std::endl;
        total = trans;
      }
    }
    print(ofs, total) << std::endl;
  } else {
    std::cerr << "No data?!" << std::endl;
  }

  return 0;
}
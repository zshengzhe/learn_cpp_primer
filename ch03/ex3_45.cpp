/**
 * Created by Linus Zhang on 2023/1/5.
 */
#include <iostream>

int main()
{
  int arr[3][4] =
      {
          {0, 1, 2, 3},
          {4, 5, 6, 7},
          {8, 9, 10, 11}
      };

  // range
  std::cout << "range print: {" << std::endl;
  for (auto &row: arr) {
    std::cout << "[";
    for (auto column: row) {
      std::cout << column << ",";
    }
    std::cout << "\b" << "]" << std::endl;
  }
  std::cout << "}" << std::endl;

  // subscript
  std::cout << "subscript print: {" << std::endl;
  for (size_t row = 0; row != 3; row++) {
    std::cout << "[";
    for (size_t column = 0; column != 4; column++) {
      std::cout << arr[row][column] << ",";
    }
    std::cout << "\b" << "]" << std::endl;
  }
  std::cout << "}" << std::endl;

  // point
  std::cout << "point print: {" << std::endl;
//  for (auto rb = std::begin(arr), re = std::end(arr); rb != re; rb++) {
//    std::cout << "[";
//    for (auto cb = std::begin(*rb), ce = std::end(*rb); cb != ce; cb++) {
//      std::cout << *cb << ",";
//    }
//    std::cout << "\b" << "]" << std::endl;
//  }
  for (auto row = arr; row != std::end(arr); row++) {
    std::cout << "[";
    for (auto column = *row; column != std::end(*row); column++) {
      std::cout << *column << ",";
    }
    std::cout << "\b" << "]" << std::endl;
  }
  std::cout << "}" << std::endl;

  return 0;
}
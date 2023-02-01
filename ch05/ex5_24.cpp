/**
 * Created by Linus Zhang on 2023/2/1.
 */
#include <iostream>

int main()
{
  int i1, i2;
  std::cin >> i1 >> i2;
  if (i2 == 0) {
    throw std::runtime_error("divisor is 0");
  }
  std::cout << i1 / i2 << std::endl;

  return 0;
}
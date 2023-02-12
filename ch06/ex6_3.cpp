/**
 * Created by Linus Zhang on 2023/2/2.
 */
#include <iostream>

int fact(int val)
{
  int ret = 1;
  while (val > 1) {
    ret *= val--;
  }

  return ret;
}

int main()
{
  std::cout << std::boolalpha << (120 == fact(5)) << std::endl;

  return 0;
}
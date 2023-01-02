/**
 * Created by Linus Zhang on 2022/12/25.
 */
#include <iostream>

void print_while()
{
  int i = 10;
  while (i >= 0) {
    std::cout << i-- << std::endl;
  }
}

void print_for()
{
  for (int i = 10; i >= 0; i--) {
    std::cout << i << std::endl;
  }
}

int main()
{
  print_while();
  return 0;
}
/**
 * Created by Linus Zhang on 2023/2/2.
 */
#include <iostream>

void print_abs(int num)
{
  std::cout << "|" << num << "| = " << (num < 0 ? -num : num) << std::endl;
}

int main()
{
  print_abs(-5);
  return 0;
}
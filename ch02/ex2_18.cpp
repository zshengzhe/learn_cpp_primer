/**
 * Created by Linus Zhang on 2022/12/25.
 */
#include <iostream>

int main()
{
  int x = 0, y = 1;
  int *p1 = &x;
  std::cout << "original p1 = " << *p1 << std::endl;

  p1 = &y;
  std::cout << "p1 = " << *p1 << std::endl;

  *p1 = 2;
  std::cout << "p1 = " << *p1 << std::endl;

  return 0;
}
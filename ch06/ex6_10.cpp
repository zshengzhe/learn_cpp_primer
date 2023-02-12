/**
 * Created by Linus Zhang on 2023/2/2.
 */
#include <iostream>

void swap(int *p1, int *p2)
{
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

int main()
{
  int a = 0, b = 1;
  std::cout << "origin a = " << a << " , b = " << b << std::endl;
  swap(&a, &b);
  std::cout << "swaped a = " << a << " , b = " << b << std::endl;

  return 0;
}
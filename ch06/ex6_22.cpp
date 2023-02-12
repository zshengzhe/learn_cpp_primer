/**
 * Created by Linus Zhang on 2023/2/6.
 */
#include <iostream>

void swap(int *(&a), int *(&b))
{
  auto tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a = 1, b = 2;
  int *pa = &a;
  int *pb = &b;
  std::cout << "origin a = " << a << " , b = " << b << std::endl;

  swap(pa, pb);
  std::cout << "swaped a = " << *pa << " , b = " << *pb << std::endl;

  return 0;
}
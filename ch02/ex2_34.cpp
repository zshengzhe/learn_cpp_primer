/**
 * Created by Linus Zhang on 2022/12/27.
 */
#include <iostream>

int main()
{
  int i = 0, &r = i;

  auto a = r;
  const int ci = i, &cr = ci;
  auto b = ci;
  auto c = cr;
  auto d = &i;
  auto e = &ci;

  a = 42;
  b = 42;
  c = 42;
  *d = 42;
  e = &c;

  return 0;
}
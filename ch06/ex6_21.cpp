/**
 * Created by Linus Zhang on 2023/2/6.
 */
#include <iostream>

int max(int i, const int *const p)
{
  return i > (*p) ? i : *p;
}

int main()
{
  int a = 1, b = 2;
  std::cout << max(a, &b);

  return 0;
}
/**
 * Created by Linus Zhang on 2022/12/25.
 */
#include <iostream>

void print_range_while(int lo, int hi)
{
  if (lo > hi) {
    print_range_while(hi, lo);
    return;
  }

  while (lo <= hi) {
    std::cout << lo++ << " ";
  }
}

void print_range_for(int lo, int hi)
{
  if (lo > hi) {
    print_range_for(hi, lo);
    return;
  }

  for (; lo <= hi; lo++) {
    std::cout << lo << " ";
  }
}

int main()
{
  int lo = 0, hi = 0;
  std::cout << "Enter two integers:" << std::endl;
  std::cin >> lo >> hi;
  print_range_for(lo, hi);

  return 0;
}


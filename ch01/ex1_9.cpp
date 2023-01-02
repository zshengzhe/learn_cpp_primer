/**
 * Created by Linus Zhang on 2022/12/25.
 */
#include <iostream>

auto sum_while(int lo, int hi)
{
  int sum = 0;
  while (lo <= hi) {
    sum += lo++;
  }
  return sum;
}

auto sum_for(int lo, int hi)
{
  int sum = 0;
  for (; lo <= hi; lo++) {
    sum += lo;
  }

  return sum;
}

int main()
{
  std::cout << "Sum of 50 to 100 inclusive is: " << sum_while(50, 100) << std::endl;
  return 0;
}

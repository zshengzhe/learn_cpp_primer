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

void interactive_fact()
{
  const std::string prompt = "Enter a number within [1, 13) : ";
  const std::string out_of_range = "Out of range, please try again.\n";
  for (int num; std::cout << prompt, std::cin >> num;) {
    if (num < 1 || num > 12) {
      std::cout << out_of_range << std::endl;
      continue;
    }
    std::cout << fact(num) << std::endl;
  }
}

int main()
{
  interactive_fact();

  return 0;
}
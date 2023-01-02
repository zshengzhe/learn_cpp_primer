/**
 * Created by Linus Zhang on 2022/12/25.
 */
#include <iostream>

int main(int argc, char *argv[])
{
  int sum = 0;
  for (int num; std::cin >> num; sum += num);
  std::cout << sum << std::endl;

  return 0;
}

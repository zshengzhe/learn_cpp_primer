/**
 * Created by Linus Zhang on 2023/4/9.
 */
#include <iostream>

int main()
{
  int i = 10;
  auto check_and_decrement = [&]() -> bool {
    return i > 0 ? !--i : !i;
  };

  while (!check_and_decrement())
    std::cout << i << " ";
  std::cout << i << std::endl;

  return 0;
}
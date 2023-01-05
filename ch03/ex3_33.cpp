/**
 * Created by Linus Zhang on 2023/1/4.
 */
#include <iostream>

int main()
{
  unsigned scores[11];
  unsigned grade;
  while (std::cin >> grade) {
    if (grade <= 100) {
      std::cout << scores[grade / 10] << std::endl;
      ++scores[grade / 10];
    }
  }

  return 0;
}
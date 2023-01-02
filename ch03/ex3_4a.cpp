/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::string s1, s2;
  std::cin >> s1 >> s2;

  if (s1 == s2) {
    std::cout << "The two strings are equal." << std::endl;
    return 0;
  }

  std::cout << "The larger string is " << ((s1 > s2) ? s1 : s2) << std::endl;

  return 0;
}
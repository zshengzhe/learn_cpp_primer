/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::string s1, s2;
  std::cin >> s1 >> s2;

  auto s1size = s1.size();
  auto s2size = s2.size();
  if (s1size == s2size) {
    std::cout << "The two strings have the same length." << std::endl;
    return 0;
  }

  std::cout << "The longer string is " << ((s1size > s2size) ? s1 : s2) << std::endl;

  return 0;
}
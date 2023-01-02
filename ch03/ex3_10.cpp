/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::cout << "Enter a string of characters including punctuation." << std::endl;
  std::string str;
  std::cin >> str;

  for (auto c: str) {
    if (!ispunct(c)) {
      std::cout << c;
    }
  }
  std::cout << std::endl;

  return 0;

}
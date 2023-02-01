/**
 * Created by Linus Zhang on 2023/2/1.
 */
#include <iostream>
#include <string>

int main()
{
  std::string prev, str;
  while (std::cin >> str) {
    if (str == prev) {
      break;
    }
    prev = str;
  }

  if (std::cin.eof()) {
    std::cout << "no word was repeated." << std::endl;
  } else {
    std::cout << str << " occurs twice in succession." << std::endl;
  }

  return 0;
}
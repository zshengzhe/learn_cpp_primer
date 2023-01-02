/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::string str("abc def ghi jkl mno pqrs tuv wxyz");

  decltype(str.size()) index = 0;

  // while
  while (index < str.size()) {
    if (isalpha(str[index])) {
      str[index] = 'X';
    }
    index++;
  }
  std::cout << str << std::endl;

  // for
  for (index = 0; index < str.size(); index++) {
    if (isalpha(str[index])) {
      str[index] = 'Y';
    }
  }
  std::cout << str << std::endl;

  return 0;
}
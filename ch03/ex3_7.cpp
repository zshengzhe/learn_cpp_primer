/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::string str("abc def ghi jkl mno pqrs tuv wxyz");

  for (char c : str) {
    if (isalpha(c)) {
      c = 'X';
    }
  }

  std::cout << str << std::endl;
  return 0;
}
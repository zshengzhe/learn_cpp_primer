/**
 * Created by Linus Zhang on 2023/2/6.
 */
#include <string>
#include <iostream>

bool any_capital(const std::string &str)
{
  for (auto ch: str) {
    if (isupper(ch)) {
      return true;
    }
  }

  return false;
}

void to_lowercase(std::string &str)
{
  for (auto &ch: str) {
    if (isupper(ch)) {
      ch = tolower(ch);
    }
  }
}

int main()
{
  std::string hello("Hello World!");
  std::cout << std::boolalpha << any_capital(hello) << std::endl;

  to_lowercase(hello);
  std::cout << hello << std::endl;

  return 0;
}
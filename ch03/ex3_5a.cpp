/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>

int main()
{
  std::string concatenated, buffer;

  while (std::cin >> buffer) {
    concatenated += buffer;
  }

  std::cout << "The concatenated string is " << concatenated << std::endl;

  return 0;
}
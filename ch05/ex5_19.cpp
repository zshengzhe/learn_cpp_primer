/**
 * Created by Linus Zhang on 2023/2/1.
 */
#include <iostream>

int main()
{
  std::string str1, str2;
  std::string command;
  do {
    std::cout << "Please enter two strings: ";

    if (std::cin >> str1 >> str2) {
      std::cout << "The short string is: "
                << (str1.length() > str2.length() ? str2 : str1)
                << "\n"
                << std::endl;
    }

    std::cout << "More? Enter yes or no: ";
    std::cin >> command;

  } while (!command.empty() && tolower(command[0]) == 'y');

  return 0;
}
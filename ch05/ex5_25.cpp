/**
 * Created by Linus Zhang on 2023/2/1.
 */
#include <iostream>

int main()
{
  std::string command;
  for (int i1, i2; std::cout << "Enter two integers: ", std::cin >> i1 >> i2;) {
    try {
      if (i2 == 0) {
        throw std::runtime_error("divisor is 0");
      }
      std::cout << i1 / i2 << std::endl;
    } catch (std::runtime_error err) {
      std::cout << err.what() << "\n"
                << "Try again? Enter yes or no"
                << std::endl;
      std::cin >> command;
      if (command.empty() || tolower(command[0]) == 'n') {
        break;
      }
    }
  }

  return 0;
}
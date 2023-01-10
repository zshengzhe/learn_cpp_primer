/**
 * Created by Linus Zhang on 2023/1/9.
 */
#include <iostream>
#include <string>

int main()
{
  for (int grade; std::cin >> grade;) {
    auto finalgrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "low pass" : "fail";
    std::cout << finalgrade << std::endl;

    if (grade > 90) {
      finalgrade = "high pass";
    } else if (grade > 75) {
      finalgrade = "pass";
    } else if (grade >= 60) {
      finalgrade = "low pass";
    } else {
      finalgrade = "fail";
    }
    std::cout << finalgrade << std::endl;
  }

  return 0;
}
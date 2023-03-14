/**
 * Created by Linus Zhang on 2023/2/15.
 */
#include "ex7_27.h"
#include <iostream>

int main()
{
  Screen myScreen(5, 5, 'X');
  myScreen.move(4, 0)
      .set('#')
      .display(std::cout);
  std::cout << "\n";

  myScreen.display(std::cout);
  std::cout << "\n";
}

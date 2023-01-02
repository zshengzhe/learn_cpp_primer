/**
 * use `using` for 1.4.1
 * Created by Linus Zhang on 2022/12/28.
 */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int sum = 0;
  for (int i = 1; i <= 10; i++) {
    sum += i;
  }

  cout << "Sum of 1 to 10 inclusive is " << sum << endl;

  return 0;
}
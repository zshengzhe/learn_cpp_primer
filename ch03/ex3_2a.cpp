/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  string line;
  while (getline(cin, line)) {
    cout << line << endl;
  }

  return 0;
}
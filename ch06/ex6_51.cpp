/**
 * Created by Linus Zhang on 2023/2/12.
 */
#include <iostream>

using std::cout;
using std::endl;

void f()
{
  cout << " call f()" << endl;
}

void f(int)
{
  cout << " call f(int)" << endl;
}

void f(int, int)
{
  cout << " call f(int, int)" << endl;
}

void f(double, double)
{
  cout << " call f(double, double)" << endl;
}

int main()
{
//  cout << "f(2.56, 42)";
//  f(2.56, 42);

  cout << "f(42)";
  f(42);

  cout << "f(42, 0)";
  f(42, 0);

  cout << "f(2.56, 3.14)";
  f(2.56, 3.14);

  return 0;
}
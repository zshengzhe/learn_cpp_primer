/**
 * Created by Linus Zhang on 2023/2/6.
 */
#include <iostream>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int *p)
{
  if (p) {
    cout << *p << endl;
  }
}

void print(const int *begin, const int *const end)
{
  while (begin != end) {
    cout << *begin++ << " ";
  }
  cout << endl;
}

void print(const int ia[], size_t size)
{
  for (auto i = 0; i != size; ++i) {
    cout << ia[i] << " ";
  }
  cout << endl;
}

void print(int (&arr)[2])
{
  for (auto i: arr) {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  int i = 0, j[2] = {0, 1};

  print(begin(j), end(j));
  print(&i);
  print(j, end(j) - begin(j));
  print(j);
}
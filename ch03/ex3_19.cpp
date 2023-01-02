/**
 * Created by Linus Zhang on 2023/1/1.
 */
#include <vector>
#include <iostream>

using std::vector;

int main()
{
  vector<int> v1(10, 42);
  vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
  vector<int> v3;
  for (int i = 0; i < 10; i++) {
    v3.push_back(42);
  }

  std::cout << "The first approach is better!" << std::endl;

  return 0;
}
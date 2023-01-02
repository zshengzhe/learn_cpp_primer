/**
 * Created by Linus Zhang on 2023/1/2.
 */
#include <iostream>
#include <vector>

using std::vector;

int main()
{
  vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (auto it = numbers.begin(), end = numbers.end(); it != end; it++) {
    *it *= 2;
  }

  for (auto it = numbers.cbegin(), end = numbers.cend(); it != end; it++) {
    std::cout << *it << (it != end - 1 ? "," : "");
  }

  return 0;
}
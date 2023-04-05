/**
 * Created by Linus Zhang on 2023/3/28.
 */
#include <list>
#include <deque>
#include <iostream>

int main()
{
  std::list<int> original{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::deque<int> odd;
  std::deque<int> even;

  for (auto &num: original) {
    if (num & 0x1) {
      odd.push_back(num);
    } else {
      even.push_back(num);
    }
  }

  for (auto &num: odd) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  for (auto &num: even) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
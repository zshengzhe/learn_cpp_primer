/**
 * Created by Linus Zhang on 2023/4/3.
 */
#include <list>
#include <iostream>

void remove_evens_and_double_odds(std::list<int> &data)
{
  auto iter = data.begin();
  while (iter != data.end()) {
    if (*iter & 0x1) {
      iter = data.insert(iter, *iter);
      std::advance(iter, 2);
    } else {
      iter = data.erase(iter);
    }
  }
}

int main()
{
  std::list<int> lst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  remove_evens_and_double_odds(lst);
  for (auto i: lst) {
    std::cout << i << " ";
  }

  return 0;
}
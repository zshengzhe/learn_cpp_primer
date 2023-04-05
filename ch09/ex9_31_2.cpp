/**
 * Created by Linus Zhang on 2023/4/3.
 */
#include <iostream>
#include <forward_list>

void remove_evens_and_double_odds(std::forward_list<int> &data)
{
  for (auto iter = data.before_begin(), curr = data.begin(); curr != data.end();) {
    if (*curr & 0x1) {
      curr = data.insert_after(iter, *curr);
      std::advance(curr, 2);
      std::advance(iter, 2);
    } else {
      curr = data.erase_after(iter);
    }
  }
}

int main()
{
  std::forward_list<int> lst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  remove_evens_and_double_odds(lst);
  for (auto i: lst) {
    std::cout << i << " ";
  }

  return 0;
}
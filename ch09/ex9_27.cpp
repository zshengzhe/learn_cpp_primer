/**
 * Created by Linus Zhang on 2023/3/30.
 */
#include <forward_list>
#include <iostream>

int main()
{
  std::forward_list<int> flst{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto begin = flst.before_begin();
  for (auto curr = flst.begin(), end = flst.end(); curr != end;) {
    if (*curr & 0x1) {
      flst.erase_after(begin);
    } else {
      ++begin;
    }
    ++curr;
  }

  for (auto i: flst) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
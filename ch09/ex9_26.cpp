/**
 * Created by Linus Zhang on 2023/3/30.
 */
#include <vector>
#include <list>
#include <iostream>

int main()
{
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  std::vector<int> vector(ia, std::end(ia));
  std::list<int> list(ia, std::end(ia));

  // remove odd value
  for (auto curr = list.begin(), end = list.end(); curr != end;) {
    if (*curr & 0x1) {
      curr = list.erase(curr);
    } else {
      ++curr;
    }
  }

  // remove even value
  for (auto curr = vector.begin(), end = vector.end(); curr != end;) {
    if (*curr & 0x1) {
      ++curr;
    } else {
      curr = vector.erase(curr);
    }
  }

  // print
  std::cout << "list : ";
  for (auto i: list) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::cout << "vector : ";
  for (auto i: vector) {
    std::cout << i << " ";
  }

  return 0;
}
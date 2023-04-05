/**
 * Created by Linus Zhang on 2023/3/28.
 */
#include <iostream>
#include <vector>

void double_and_insert(std::vector<int> &vec, int some_val)
{
  auto mid = [&] { return vec.begin() + vec.size() / 2; };
  for (auto curr = vec.begin(); curr != mid(); ++curr) {
    if (*curr == some_val) {
      ++(curr = vec.insert(curr, 2 * some_val));
    }
  }
}

int main()
{
  std::vector<int> v{1, 9, 1, 9, 9, 9, 1, 1};
  double_and_insert(v, 1);

  for (auto i: v)
    std::cout << i << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <vector>

int main()
{
  std::vector<int> vec1{1, 2, 3, 4, 5};
  std::vector<int> vec2{1, 2};

  assert(vec1 > vec2);

  return 0;
}
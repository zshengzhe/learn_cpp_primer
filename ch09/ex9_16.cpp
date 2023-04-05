/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <vector>
#include <list>

int main()
{
  std::vector<int> vec{1, 2, 3, 4, 5};
  std::list<int> list{1, 2};

  assert(vec > std::vector<int>(list.cbegin(), list.cend()));

  return 0;
}
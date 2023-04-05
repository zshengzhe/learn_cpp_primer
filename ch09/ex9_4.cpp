/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <vector>

bool contains(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int target)
{
  while (begin != end) {

    if (*begin == target) {
      return true;
    }

    ++begin;
  }

  return false;
}
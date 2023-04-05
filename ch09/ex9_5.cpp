/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <vector>

int contains(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int target)
{

  for (; begin != end; ++begin) {
    if (*begin == target) {
      return *begin;
    }
  }

  throw std::runtime_error("target: ", target, " not found");
}
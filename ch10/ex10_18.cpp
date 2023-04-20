/**
 * Created by Linus Zhang on 2023/4/9.
 */
#include <iostream>
#include <vector>

void elimDups(std::vector<std::string> &vs)
{
  std::sort(vs.begin(), vs.end());
  auto new_end = std::unique(vs.begin(), vs.end());
  vs.erase(new_end, vs.end());
}

void biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
  elimDups(vs);

  auto pivot = std::partition(vs.begin(), vs.end(), [sz](const std::string &s) {
    return s.size() >= sz;
  });

  for (auto it = vs.cbegin(); it != pivot; ++it) {
    std::cout << *it << " ";
  }
}

int main()
{
  // ex10.18
  std::vector<std::string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

  std::cout << "ex10.18: ";
  biggies_partition(v, 4);
  std::cout << std::endl;

  return 0;
}
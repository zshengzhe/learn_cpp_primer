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

auto check_size(const std::string &s, std::size_t sz) -> bool
{
  return s.size() > sz;
}

void biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
  elimDups(vs);

  auto pivot = std::partition(vs.begin(), vs.end(), std::bind(check_size, std::placeholders::_1, sz));

  std::ostream &os = std::cout;

  std::for_each(vs.begin(), pivot, [&](const std::string &s) {
    os << s << " ";
  });
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
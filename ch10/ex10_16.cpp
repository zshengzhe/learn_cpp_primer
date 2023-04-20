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

void biggies(std::vector<std::string> &vs, std::size_t sz)
{
  using std::string;
  elimDups(vs);

  // sort by size, but maintain alphabetical order for same size.
  std::stable_sort(vs.begin(), vs.end(), [](const string &lhs, const string &rhs) {
    return lhs.size() < rhs.size();
  });

  // get an iterator to the first one whose size() is >= sz.
  auto wc = std::find_if(vs.begin(), vs.end(), [sz](const string &s) {
    return s.size() >= sz;
  });

  // print the biggies
  std::for_each(wc, vs.end(), [](const string &s) {
    std::cout << s << " ";
  });
}

int main()
{
  std::vector<std::string> v{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
  std::cout << "ex10.16: ";
  biggies(v, 3);
  std::cout << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <map>
#include <iostream>
#include <string>

using Map = std::map<std::string, std::size_t>;

auto word_count(std::istream &is) -> Map
{
  Map word_count;
  std::string word;
  while (is >> word) {
    ++word_count[word];
  }
  return word_count;
}

auto print(Map const &m)
{
  for (auto const &kv: m) {
    std::cout << kv.first << " : " << kv.second << std::endl;
  }
}

int main()
{
  auto wc = word_count(std::cin);
  print(wc);
  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <map>
#include <iostream>
#include <string>

using Map = std::map<std::string, std::size_t>;

auto format_word(std::string &str) -> const std::string &
{
  for (auto &ch: str) {
    ch = tolower(ch);
  }
  str.erase(std::remove_if(str.begin(), str.end(), ispunct), str.end());
  return str;
}

auto word_count(std::istream &is) -> Map
{
  Map word_count;
  std::string word;
  while (is >> word) {

    ++word_count[format_word(word)];
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
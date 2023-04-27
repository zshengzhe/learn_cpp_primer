/**
 * Created by Linus Zhang on 2023/4/27.
 */
#include <map>
#include <set>
#include <string>
#include <iostream>

int main()
{
  std::multimap<std::string, std::string> author_works{
      {"Linus", "linux"},
      {"Linus", "git"},
      {"Gosling", "java"},
      {"Gosling", "golang"}
  };
  std::map<std::string, std::multiset<std::string>> order_author_works;
  for (const auto &author_work: author_works) {
    order_author_works[author_work.first].insert(author_work.second);
  }
  for (const auto &author_work: order_author_works) {
    std::cout << author_work.first << ": ";
    for (const auto &work: author_work.second) {
      std::cout << work << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/27.
 */
#include <map>
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

  std::string author{"Linus"};
  std::string work{"git"};

  auto found = author_works.find(author);
  auto count = author_works.count(author);
  while (count) {
    if (found->second == work) {
      author_works.erase(found);
      break;
    }
    ++found;
    --count;
  }

  for (const auto &author_work: author_works) {
    std::cout << author_work.first << " " << author_work.second << std::endl;
  }

}

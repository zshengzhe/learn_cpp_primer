/**
 * Created by Linus Zhang on 2023/3/30.
 */
#include <iostream>
#include <string>
#include <forward_list>

using std::forward_list, std::string;

void find_then_append(forward_list<string> &list, string &target, string &append)
{
  auto prev = list.before_begin();
  for (auto curr = list.begin(), end = list.end(); curr != end; ++curr, ++prev) {
    if (*curr == target) {
      list.insert_after(curr, append);
      return;
    }
  }
  list.insert_after(prev, append);
}

int main()
{
  string hello = "hello";
  string linus = "linus";
  string world = "world";
  string cpp = "cpp";
  string not_found = "aaa";

  forward_list<string> list{hello, linus};

  find_then_append(list, hello, world);
  for (auto &str: list) {
    std::cout << str << " ";
  }
  std::cout << std::endl;

  find_then_append(list, not_found, cpp);
  for (auto &str: list) {
    std::cout << str << " ";
  }
  std::cout << std::endl;

  return 0;
}
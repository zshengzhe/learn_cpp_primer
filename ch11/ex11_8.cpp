/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <vector>
#include <string>
#include <iostream>

auto as_set_add(std::vector<std::string> &vec, std::string target)
{
  bool search = false;
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    if (target == *it) {
      search = true;
      break;
    }
  }

  if (!search) {
    vec.push_back(target);
  }
}

auto vector_to_string(std::vector<std::string> const &v)
{
  std::string result;
  for (auto &s: v) {
    result += s;
    result += " ";
  }
  return result;
}

int main()
{
  std::vector<std::string> vec;
  as_set_add(vec, "a");
  as_set_add(vec, "b");
  as_set_add(vec, "c");
  as_set_add(vec, "c");
  as_set_add(vec, "d");
  std::cout << vector_to_string(vec) << std::endl;

  return 0;
}
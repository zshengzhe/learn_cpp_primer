/**
 * Created by Linus Zhang on 2023/4/20.
 */
#include <map>
#include <vector>
#include <string>
#include <iostream>

using Map = std::map<std::string, std::vector<std::string>>;

auto add_family(Map &map, std::string first_name, std::string family_name)
{
  map[family_name].push_back(first_name);
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

auto print(Map const &m)
{
  for (auto const &kv: m) {
    std::cout << kv.first << " : " << vector_to_string(kv.second) << std::endl;
  }
}

int main()
{
  Map map;
  add_family(map, "a1", "a");
  add_family(map, "a2", "a");
  add_family(map, "a3", "a");
  add_family(map, "b1", "b");
  print(map);

  return 0;
}
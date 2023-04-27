/**
 * Created by Linus Zhang on 2023/4/23.
 */
#include <map>
#include <vector>
#include <string>
#include <iostream>

using Map = std::multimap<std::string, std::string>;

auto add_family(Map &map, std::string first_name, std::string family_name)
{
  map.emplace(family_name, first_name);
}

auto print(Map const &m)
{
  for (auto const &kv: m) {
    std::cout << kv.first << " : " << kv.second << std::endl;
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
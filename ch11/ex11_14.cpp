/**
 * Created by Linus Zhang on 2023/4/23.
 */
#include <map>
#include <vector>
#include <string>
#include <iostream>

using Map = std::map<std::string, std::vector<std::pair<std::string, std::string>>>;

auto add_family(Map &map, std::string first_name, std::string family_name, std::string birthday)
{
  map[family_name].emplace_back(first_name, birthday);
}

auto vector_to_string(std::vector<std::pair<std::string, std::string>> const &v)
{
  std::string result;
  for (auto &pair: v) {
    result += (pair.first + "->" + pair.second);
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
  add_family(map, "a1", "a", "2013");
  add_family(map, "a2", "a", "2012");
  add_family(map, "a3", "a", "2011");
  add_family(map, "b1", "b", "2010");
  print(map);

  return 0;
}
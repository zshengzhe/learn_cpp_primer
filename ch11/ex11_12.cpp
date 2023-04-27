/**
 * Created by Linus Zhang on 2023/4/23.
 */
#include <utility>
#include <string>
#include <vector>
#include <iostream>

int main()
{
  std::vector<std::pair<std::string, int>> vec;
  std::string buffer;
  int i = 0;
  while (std::cin >> buffer >> i) {
    //     vec.push_back(std::pair<std::string, int>(buffer, i));
    vec.emplace_back(buffer, i);
  }

  for (const auto &pair: vec) {
    std::cout << pair.first << " : " << pair.second << std::endl;
  }

  return 0;
}
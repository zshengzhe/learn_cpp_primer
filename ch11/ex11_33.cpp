/**
 * Created by Linus Zhang on 2023/4/27.
 */
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

auto build_map(std::ifstream &map_file)
{
  std::map<std::string, std::string> trans;
  std::string key, value;

  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1) {
      trans[key] = value.substr(1);
    } else {
      throw std::runtime_error("no rule for " + key);
    }
  }

  return trans;
}

auto transform(const std::map<std::string, std::string> &map, const std::string &src)
{
  auto map_it = map.find(src);
  if (map_it != map.cend()) {
    return map_it->second;
  }
  return src;
}

void word_transform(std::ifstream &map_file, std::ifstream &input)
{
  auto trnas = build_map(map_file);
  std::string text;
  while (getline(input, text)) {
    std::istringstream iss(text);
    for (std::string word; iss >> word;) {
      std::cout << transform(trnas, word) << " ";
    }
    std::cout << std::endl;
  }
}

int main()
{
  std::ifstream ifs_map("../data/word_transformation.txt"), ifs_content("../data/given_to_transform.txt");
  if (ifs_map && ifs_content) {
    word_transform(ifs_map, ifs_content);
    return 0;
  }
  std::cerr << "can't find the documents." << std::endl;
  return -1;
}

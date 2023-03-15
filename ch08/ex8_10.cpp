/**
 * Created by Linus Zhang on 2023/3/15.
 */
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(int argc, char **argv)
{
  if (argc < 2) {
    std::cout << "usage: command filename" << std::endl;
    throw std::runtime_error("missing parameter");
  }
  std::ifstream ifs(argv[1]);
  std::vector<std::string> vecLine;
  std::string line;
  if (ifs) {
    while (getline(ifs, line)) {
      vecLine.push_back(line);
    }
  } else {
    std::cerr << "No data?!" << std::endl;
    return -1;
  }

  for (const auto &str: vecLine) {
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
      std::cout << word << std::endl;
    }
  }

  return 0;
}
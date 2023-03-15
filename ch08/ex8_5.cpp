/**
 * Created by Linus Zhang on 2023/3/14.
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void read_file_to_vec(const std::string &file_name, std::vector<std::string> &vec)
{
  std::ifstream ifs(file_name);
  if (ifs) {
    std::string buffer;
    while (ifs >> buffer) {
      vec.push_back(buffer);
    }
  }
}

int main()
{
  std::vector<std::string> vec;
  read_file_to_vec("../data/book.txt", vec);

  for (const auto &str: vec) {
    std::cout << str << std::endl;
  }

  return 0;
}
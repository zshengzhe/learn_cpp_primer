/**
 * Created by Linus Zhang on 2023/3/15.
 */
#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

struct PersonInfo {
  std::string name;
  std::vector<std::string> phones;
};

bool valid(const std::string &str)
{
  return isdigit(str[0]);
}

std::string format(const std::string &str)
{
  return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char **argv)
{
  if (argc < 2) {
    std::cout << "usage: command filename" << std::endl;
    throw std::runtime_error("missing parameter");
  }

  std::ifstream ifs(argv[1]);
  std::string line, phone;
  std::vector<PersonInfo> people;
  std::istringstream record;

  while (getline(ifs, line)) {
    PersonInfo info;
    record.clear();
    record.str(line);

    record >> info.name;
    while (record >> phone) {
      info.phones.push_back(phone);
    }

    people.push_back(info);
  }

  for (const auto &info: people) {
    std::ostringstream formatted, badNums;
    for (const auto &nums: info.phones) {
      if (!valid(nums)) {
        badNums << " " << nums;
      } else {
        formatted << " " << format(nums);
      }
    }

    if (badNums.str().empty())
      std::cout << info.name << " " << formatted.str() << std::endl;
    else
      std::cerr << "input error: " << info.name
                << " invalid number(s) " << badNums.str() << std::endl;
  }

  return 0;
}
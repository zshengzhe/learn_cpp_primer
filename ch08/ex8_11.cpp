/**
 * Created by Linus Zhang on 2023/3/15.
 */

#include <sstream>
#include <iostream>
#include <vector>

struct PersonInfo {
  std::string name;
  std::vector<std::string> phones;
};

int main()
{
  std::string line, phone;
  std::vector<PersonInfo> people;

  std::istringstream record;

  while (getline(std::cin, line)) {
    PersonInfo info;
    record.clear();
    record.str(line);

    record >> info.name;
    while (record >> phone) {
      info.phones.push_back(phone);
    }

    people.push_back(info);
  }

  return 0;
}
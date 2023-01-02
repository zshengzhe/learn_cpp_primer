/**
 * Created by Linus Zhang on 2023/1/1.
 */
#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<std::string> vec;
  for (std::string buffer; std::cin >> buffer; vec.push_back(buffer));

  for (auto &str: vec) {
    for (auto &c: str) {
      c = toupper(c);
    }
  }

  for (auto str: vec) {
    std::cout << str << std::endl;
  }

  return 0;
}
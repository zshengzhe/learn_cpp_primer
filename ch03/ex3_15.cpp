/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <string>
#include <iostream>
#include <vector>

int main()
{
  std::vector<std::string> vec;

  for (std::string buffer; std::cin >> buffer; vec.push_back(buffer));

  return 0;
}
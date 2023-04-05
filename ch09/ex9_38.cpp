/**
 * Created by Linus Zhang on 2023/4/3.
 */
#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::vector<std::string> v;
  for (std::string buffer; std::cin >> buffer; v.push_back(buffer))
    std::cout << v.capacity() << std::endl;

  return 0;
}
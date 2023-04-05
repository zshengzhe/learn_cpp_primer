/**
 * Created by Linus Zhang on 2023/3/28.
 */
#include <vector>
#include <iostream>

int main()
{
  std::vector<int> vec;

  std::cout << vec.at(0) << std::endl;
  std::cout << vec[0] << std::endl;
  std::cout << vec.front() << std::endl;
  std::cout << *vec.begin() << std::endl;

  return 0;

}
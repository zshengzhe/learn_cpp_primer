/**
 * Created by Linus Zhang on 2023/2/7.
 */
#include <iostream>

int main(int argc, char *argv[])
{
  if (argc < 2) {
    std::cout << "usage: command [] []" << std::endl;
    throw std::runtime_error("missing parameter");
  }

  std::string result;
  for (auto i = 1; i != argc; ++i) {
    result += argv[i];
  }

  std::cout << result << std::endl;

  return 0;
}
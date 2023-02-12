/**
 * Created by Linus Zhang on 2023/2/6.
 */
#include <iostream>

void reset(int &src, int &dest)
{
  dest = src;
}

int main()
{
  int src = 100;
  int dest = 0;
  reset(src, dest);

  std::cout << "dest -> " << src << " , src == dest -> " << std::boolalpha << (src == dest) << std::endl;

  return 0;
}


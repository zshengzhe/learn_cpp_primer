/**
 * Created by Linus Zhang on 2022/12/29.
 */
#include <iostream>
#include <vector>
using std::vector;

int main()
{
  vector<int> vec;
  for (int buffer; std::cin >> buffer; vec.push_back(buffer));

  return 0;
}
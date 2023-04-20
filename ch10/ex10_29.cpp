/**
 * Created by Linus Zhang on 2023/4/10.
 */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void extract(std::istream &is, std::vector<std::string> &vec)
{
  std::istream_iterator<std::string> it(is), eof;
  std::copy(it, eof, std::back_inserter(vec));
}

int main()
{
  std::ifstream ifs("../data/book.txt");
  std::vector<std::string> vec;
  extract(ifs, vec);

  // output
  std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<std::string>(std::cout, "\n"));

  return 0;
}
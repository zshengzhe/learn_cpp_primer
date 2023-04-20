/**
 * Created by Linus Zhang on 2023/4/5.
 */
#include <list>
#include <string>
#include <iostream>

using std::list;

unsigned count(list<std::string>::const_iterator begin, list<std::string>::const_iterator end, std::string &target)
{
  unsigned cnt = 0;
  while (begin != end) {
    if (*begin == target) {
      cnt++;
    }
    ++begin;
  }

  return cnt;
}

int main()
{
  std::string arr[] = {"1", "1", "2", "3", "4", "6", "2", "2", "5", "7", "3", "1", "2"};
  list<std::string> v(std::begin(arr), std::end(arr));

  std::cout << "self 1 -> count: " << count(v.cbegin(), v.cend(), "1") << std::endl;
  std::cout << "std::count 1 -> count: " << std::count(v.cbegin(), v.cend(), "1") << std::endl;
  std::cout << "self 2 -> count: " << count(v.cbegin(), v.cend(), "2") << std::endl;
  std::cout << "std::count 2 -> count: " << std::count(v.cbegin(), v.cend(), "2") << std::endl;

  return 0;
}
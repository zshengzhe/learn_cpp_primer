/**
 * Created by Linus Zhang on 2023/4/17.
 */
#include <iostream>
#include <vector>
#include <numeric>
#include "../include/Sales_item.h"

int main()
{
  std::istream_iterator<Sales_item> in_itr(std::cin), in_eof;
  std::vector<Sales_item> vec;

  while (in_itr != in_eof) {
    vec.push_back(*in_itr++);
  }
  std::sort(vec.begin(), vec.end(), compareIsbn);

  for (auto begin = vec.cbegin(), end = begin; begin != vec.cend(); begin = end) {
    end = std::find_if(begin, vec.cend(), [begin](const Sales_item &item) -> bool {
      return item.isbn() != begin->isbn();
    });
    std::cout << std::accumulate(begin, end, Sales_item(begin->isbn())) << std::endl;
  }

  return 0;
}
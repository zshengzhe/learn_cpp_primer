/**
 * Created by Linus Zhang on 2023/4/6.
 */
#include "../ch07/ex7_26.h"
#include <vector>
#include <iostream>

int main()
{
  Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("zzzzz");
  std::vector<Sales_data> vec{d1, d2, d3, d4, d5};

  std::sort(vec.begin(), vec.end(), [](const Sales_data &s1, const Sales_data &s2) {
    return s1.isbn().size() < s2.isbn().size();
  });
  for (const auto &element: vec)
    std::cout << element.isbn() << " ";
  std::cout << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/4/10.
 */
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

int main()
{
  std::vector<int> vector{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::list<int> list;
  std::copy(vector.cbegin(), vector.cend(), std::inserter(list, list.begin()));
  std::cout << "list -> " << "\n";
  for (auto i: list) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::forward_list<int> forward_list;
  std::copy(vector.cbegin(), vector.cend(), std::front_inserter(forward_list));
  std::cout << "forward_list -> " << "\n";
  for (auto i: forward_list) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  std::deque<int> deque;
  std::copy(vector.cbegin(), vector.cend(), std::inserter(deque, deque.begin()));
  std::cout << "deque -> " << "\n";
  for (auto i: deque) {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}
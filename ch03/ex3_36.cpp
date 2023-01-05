/**
 * Created by Linus Zhang on 2023/1/4.
 */
#include <iostream>
#include <vector>

using std::begin;
using std::end;
using std::vector;

bool compare(int *const left_begin, int *const left_end, int *const right_begin, int *const right_end)
{
  // compare size
  if (left_end - left_begin != right_end - right_begin) {
    return false;
  }

  for (auto *l = left_begin, *r = right_begin; (l != left_end) && (r != right_end); l++, r++) {
    if (*l != *r) {
      return false;
    }
  }

  return true;
}

int main()
{
  int arr0[] = {1, 2, 3, 4};
  int arr1[] = {1, 2, 3};
  bool arr_compare = compare(begin(arr0), end(arr0), begin(arr1), end(arr1));
  std::cout << (arr_compare ? "The two arrays are equal." : "The two arrays are not equal.") << std::endl;

  vector<int> vec0 = {1, 2, 3, 4};
  vector<int> vec1 = {1, 2, 3};
  if (vec0 == vec1) {
    std::cout << "The two vectors are equal." << std::endl;
  } else {
    std::cout << "The two vectors are not equal." << std::endl;
  }

  return 0;
}
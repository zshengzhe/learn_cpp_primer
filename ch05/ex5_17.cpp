/**
 * Created by Linus Zhang on 2023/2/1.
 */
#include <vector>
#include <iostream>

using std::vector;

bool is_prefix(vector<int> const &vec1, vector<int> const &vec2)
{
  if (vec1.empty() || vec2.empty()) {
    return false;
  }

  for (int i = 0; i != vec1.size() && i != vec2.size(); i++) {
    if (vec1[i] != vec2[i]) {
      return false;
    }
  }
  return true;
}

int main()
{
  vector<int> vec1{0, 1, 1, 2};
  vector<int> vec2{0, 1, 1, 2, 3, 5, 7};

  std::cout << "is prefix " << (is_prefix(vec1, vec2) ? "true" : "false") << std::endl;

  return 0;
}
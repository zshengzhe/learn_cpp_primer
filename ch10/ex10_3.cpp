/**
 * Created by Linus Zhang on 2023/4/5.
 */
#include <numeric>
#include <vector>
#include <iostream>

using std::vector;

std::string extractExpression(vector<int>::const_iterator begin, vector<int>::const_iterator end)
{
  std::string expression;
  while (begin != end) {
    expression += std::to_string(*begin++);
    expression += "+";
  }

  return expression.erase(expression.size() - 1);
}

int main()
{
  vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "expression: " << extractExpression(v.cbegin(), v.cend()) << " result: "
            << std::accumulate(v.cbegin(), v.cend(), 0)
            << std::endl;

  return 0;
}
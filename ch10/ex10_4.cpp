/**
 * Created by Linus Zhang on 2023/4/5.
 */
#include <numeric>
#include <vector>
#include <iostream>

using std::vector;

std::string extractExpression(vector<double>::const_iterator begin, vector<double>::const_iterator end)
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
  vector<double> v{1.1, 0.5, 3.3};

  std::cout << "expression: " << extractExpression(v.cbegin(), v.cend()) << " result: "
            << std::accumulate(v.cbegin(), v.cend(), 0)
            << std::endl;

  return 0;
}
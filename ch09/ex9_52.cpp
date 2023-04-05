/**
 * Created by Linus Zhang on 2023/4/3.
 */
#include <stack>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::stack;

string eval(stack<char> &stack)
{
  string result;
  while (!stack.empty()) {
    auto c = stack.top();
    if ('(' == c) {
      std::reverse(result.begin(), result.end());
      stack.pop();
      return result;
    }
    result += c;
    stack.pop();
  }
  return result;
}

int main()
{

  string expression{"This is (linus)."};

  stack<char> stack;
  string result;

  for (const auto &c: expression) {
    if (')' == c) {
      if (stack.empty()) {
        throw std::runtime_error("'(' not found");
      }
      result += eval(stack);
      continue;
    }
    stack.push(c);
  }

  while (!stack.empty()) {
    const auto c = stack.top();
    result += c;
    stack.pop();
  }

  std::cout << result << std::endl;

  return 0;
}
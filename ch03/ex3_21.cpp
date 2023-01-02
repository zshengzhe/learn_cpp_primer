/**
 * Created by Linus Zhang on 2023/1/2.
 */
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

void check_and_print(const vector<int> &vec)
{
  cout << "{size: " << vec.size() << ", ";
  cout << "value: [";
  for (auto it = vec.cbegin(), end = vec.cend(); it != end; it++) {
    cout << *it << (it != end - 1 ? "," : "");
  }
  cout << "]}" << endl;
}

void check_and_print(const vector<string> &vec)
{
  cout << "{size: " << vec.size() << ", ";
  cout << "value: [";
  for (auto it = vec.cbegin(), end = vec.cend(); it != end; it++) {
    cout << (it->empty() ? "(null)" : *it) << (it != end - 1 ? "," : "");
  }
  cout << "]}" << endl;
}

int main()
{
  vector<int> v1;
  vector<int> v2(10);
  vector<int> v3(10, 42);
  vector<int> v4{10};
  vector<int> v5{10, 42};
  vector<string> v6{10};
  vector<string> v7{10, "hi"};

  check_and_print(v1);
  check_and_print(v2);
  check_and_print(v3);
  check_and_print(v4);
  check_and_print(v5);
  check_and_print(v6);
  check_and_print(v7);

  return 0;
}
/**
 * Created by Linus Zhang on 2023/1/1.
 */
#include <vector>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
  vector<int> v1;
  cout << "{v1 size: " << v1.size() << ", ";
  cout << "value: [";
  for (auto i: v1) {
    cout << i << ",";
  }
  if (!v1.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<int> v2(10);
  cout << "{v2 size: " << v2.size() << ", ";
  cout << "value: [";
  for (auto i: v2) {
    cout << i << ",";
  }
  if (!v2.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<int> v3(10, 42);
  cout << "{v3 size: " << v3.size() << ", ";
  cout << "value: [";
  for (auto i: v3) {
    cout << i << ",";
  }
  if (!v3.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<int> v4{10};
  cout << "{v4 size: " << v4.size() << ", ";
  cout << "value: [";
  for (auto i: v4) {
    cout << i << ",";
  }
  if (!v4.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<int> v5{10, 42};
  cout << "{v5 size: " << v5.size() << ", ";
  cout << "value: [";
  for (auto i: v5) {
    cout << i << ",";
  }
  if (!v5.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<string> v6{10};
  cout << "{v6 size: " << v6.size() << ", ";
  cout << "value: [";
  for (auto str : v6) {
    if (str.empty()) {
      cout << "(null)" << ",";
      continue;
    }
    cout << str << ",";
  }
  if (!v6.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  vector<string> v7{10, "hi"};
  cout << "{v7 size: " << v7.size() << ", ";
  cout << "value: [";
  for (auto str : v7) {
    if (str.empty()) {
      cout << "(null)" << ",";
      continue;
    }
    cout << str << ",";
  }
  if (!v7.empty()) {
    // 退格
    cout << "\b";
  }
  cout << "]}" << endl;

  return 0;
}
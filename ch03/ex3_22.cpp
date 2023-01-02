/**
 * Created by Linus Zhang on 2023/1/2.
 */
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::isalpha;

int main()
{
  vector<string> text;
  for (string buffer; getline(cin, buffer); text.push_back(buffer));

  for (auto it = text.begin(), end = text.end(); it != end; it++) {
    for (auto ch_it = it->begin(), ch_end = it->end(); ch_it != ch_end; ch_it++) {
      if (isalpha(*ch_it)) {
        *ch_it = toupper(*ch_it);
      }
      cout << *it << " ";
    }
  }

  return 0;
}
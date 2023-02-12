/**
 * Created by Linus Zhang on 2023/2/9.
 */
#include <string>

using std::string;

inline bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}
/**
 * Created by Linus Zhang on 2023/4/6.
 */
#include <vector>
#include <string>
#include <iostream>

using std::vector, std::string;

auto elimDups(vector<string> &words) -> vector<string> &
{
  std::sort(words.begin(), words.end());
  auto unique_end = std::unique(words.begin(), words.end());
  words.erase(unique_end, words.end());
  return words;
}
/**
 * Created by Linus Zhang on 2023/1/31.
 */
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main()
{
  string str, word;
  vector<string> words{};
  vector<unsigned> wordCnt{};

  vector<string> array{"how", "now", "now", "now", "brown", "cow", "cow"};

  while (std::cin >> std::skipws >> str) {
    if (words.empty()) {
      words.push_back(str);
      wordCnt.push_back(1);
      continue;
    }

    word = words.back();
    if (word == str) {
      wordCnt.back()++;
    } else {
      words.push_back(str);
      wordCnt.push_back(1);
    }
  }

  int maxIndex = 0;
  unsigned maxCnt = 0;
  for (auto i = 0; i != wordCnt.size(); ++i) {
    if (wordCnt[i] > maxCnt) {
      maxIndex = i;
      maxCnt = wordCnt[i];
    }
  }

  std::cout << "the word " << words[maxIndex] << " occurred " << maxCnt << " times." << std::endl;

  return 0;
}
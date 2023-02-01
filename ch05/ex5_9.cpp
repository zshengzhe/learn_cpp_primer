/**
 * Created by Linus Zhang on 2023/1/31.
 */
#include <iostream>

int main()
{
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  for (char token; std::cin >> token;) {
    if (token == 'a') {
      aCnt++;
    } else if (token == 'e') {
      eCnt++;
    } else if (token == 'i') {
      iCnt++;
    } else if (token == 'o') {
      oCnt++;
    } else if (token == 'u') {
      uCnt++;
    }
  }

  std::cout << "Number of vowel a: \t" << aCnt << '\n'
            << "Number of vowel e: \t" << eCnt << '\n'
            << "Number of vowel i: \t" << iCnt << '\n'
            << "Number of vowel o: \t" << oCnt << '\n'
            << "Number of vowel u: \t" << uCnt << std::endl;

  return 0;
}
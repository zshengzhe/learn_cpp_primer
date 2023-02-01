/**
 * Created by Linus Zhang on 2023/1/31.
 */
#include <iostream>

int main()
{
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, spaceCnt = 0, tabCnt = 0, newLineCnt = 0,
      ffCnt = 0, flCnt = 0, fiCnt = 0;
  char token, pre_token = '\0';
  while (std::cin >> std::skipws >> token) {
    switch (token) {
      case 'a':
      case 'A':++aCnt;
        break;
      case 'e':
      case 'E':++eCnt;
        break;
      case 'i':
      case 'I':++iCnt;
        break;
      case 'o':
      case 'O':++oCnt;
        break;
      case 'u':
      case 'U':++uCnt;
        break;
      case ' ':++spaceCnt;
        break;
      case '\t':++tabCnt;
        break;
      case '\n':++newLineCnt;
        break;
      case 'f':
        if (pre_token == 'f') {
          ++ffCnt;
        }
        break;
      case 'l':
        if (pre_token == 'f') {
          ++flCnt;
        }
        break;
    }
    pre_token = token;
  }

  std::cout << "Number of vowel a(A): \t" << aCnt << '\n'
            << "Number of vowel e(E): \t" << eCnt << '\n'
            << "Number of vowel i(I): \t" << iCnt << '\n'
            << "Number of vowel o(O): \t" << oCnt << '\n'
            << "Number of vowel u(U): \t" << uCnt << '\n'
            << "Number of space: \t" << spaceCnt << '\n'
            << "Number of tab char: \t" << tabCnt << '\n'
            << "Number of new line: \t" << newLineCnt << std::endl;

  return 0;
}
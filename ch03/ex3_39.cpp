/**
 * Created by Linus Zhang on 2023/1/5.
 */
#include <string>
#include <iostream>

int main()
{
  std::string str1{"abc123"};
  std::string str2{"abc124"};
  if (str1 == str2) {
    std::cout << "same string." << std::endl;
  } else if (str1 > str2) {
    std::cout << (str1 + " > " + str2) << std::endl;
  } else {
    std::cout << (str1 + " < " + str2) << std::endl;
  }

  const char *const str3 = "abc123";
  const char *const str4 = "abc121";
  char content[50];
  auto cmp = strcmp(str3, str4);
  if (cmp == 0) {
    std::cout << "same string." << std::endl;
  } else if (cmp > 0) {
    strcat(content, str3);
    strcat(content, " < ");
    strcat(content, str4);
  } else {
    strcat(content, str3);
    strcat(content, " > ");
    strcat(content, str4);
  }

  std::cout << content << std::endl;

  return 0;
}
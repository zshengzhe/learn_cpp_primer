/**
 * Created by Linus Zhang on 2023/1/5.
 */
#include <iostream>

int main()
{
  const char str1[] = "Hello";
  const char str2[] = "World!";

  char str3[strlen(str1) + strlen(" ") + strlen(str2) + 1];
  strcpy(str3, str1);
  strcat(str3, " ");
  strcat(str3, str2);

  std::cout << str3 << std::endl;

  return 0;
}
/**
 * Created by Linus Zhang on 2023/2/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_24_H
#define LEARN_CPP_PRIMER_EX7_24_H

#include <string>

class Screen {

 public:
  using pos = std::string::size_type;

  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
  Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

  char get() const
  {
    return contents[cursor];
  }

  inline char get(pos r, pos c)
  {
    pos row = r * width;
    return contents[row + c];
  }

  Screen &move(pos r, pos c);

 private:
  pos cursor = 0;
  pos height = 0;
  pos width = 0;

  std::string contents;
};

Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

#endif //LEARN_CPP_PRIMER_EX7_24_H

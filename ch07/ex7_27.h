/**
 * Created by Linus Zhang on 2023/2/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_27_H
#define LEARN_CPP_PRIMER_EX7_27_H

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

  inline char get(pos r, pos c);

  inline Screen &move(pos r, pos c);

  inline Screen &set(char c);

  const Screen &display(std::ostream &os) const
  {
    do_display(os);
    return *this;
  }

  Screen &display(std::ostream &os)
  {
    do_display(os);
    return *this;
  }

 private:
  void do_display(std::ostream &os) const
  {
    os << contents;
  }

  pos cursor = 0;
  pos height = 0;
  pos width = 0;

  std::string contents;
};

inline Screen &Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline char Screen::get(pos r, pos c)
{
  pos row = r * width;
  return contents[row + c];
}

inline Screen &Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}
#endif //LEARN_CPP_PRIMER_EX7_27_H

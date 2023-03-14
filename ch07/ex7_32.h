/**
 * Created by Linus Zhang on 2023/2/15.
 */

#ifndef LEARN_CPP_PRIMER_EX7_32_H
#define LEARN_CPP_PRIMER_EX7_32_H

#include <vector>
#include <string>
#include <iostream>

class Screen;

class Window_mgr {
 public:
  using ScreenIndex = std::vector<Screen>::size_type;
  inline void clear(ScreenIndex index);
 private:
  std::vector<Screen> screens;
};

class Screen {
  friend void Window_mgr::clear(ScreenIndex index);

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

void Window_mgr::clear(ScreenIndex index)
{
  if (index >= screens.size()) {
    return;
  }
  Screen &screen = screens[index];
  screen.contents = std::string(screen.height * screen.width, ' ');
}

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

#endif //LEARN_CPP_PRIMER_EX7_32_H

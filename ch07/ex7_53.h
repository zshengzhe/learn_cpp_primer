/**
 * Created by Linus Zhang on 2023/3/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_53_H
#define LEARN_CPP_PRIMER_EX7_53_H

class Debug {

  constexpr Debug(bool b = true) : rt(b), hw(b), io(b), other(b) {}
  constexpr Debug(bool r, bool h, bool i, bool o) : rt(r), hw(h), io(i), other(o) {}

  constexpr bool any()
  {
    return rt || hw || io || other;
  }

  void set_rt(bool b)
  {
    rt = b;
  }

  void set_hw(bool b)
  {
    hw = b;
  }

  void set_io(bool b)
  {
    io = b;
  }

  void set_other(bool b)
  {
    other = b;
  }

 private:
  bool rt; // runtime
  bool hw; // hardware
  bool io; // io
  bool other; // other
};

#endif //LEARN_CPP_PRIMER_EX7_53_H

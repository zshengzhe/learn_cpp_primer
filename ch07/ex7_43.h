/**
 * Created by Linus Zhang on 2023/2/16.
 */

#ifndef LEARN_CPP_PRIMER_EX7_43_H
#define LEARN_CPP_PRIMER_EX7_43_H

#include <iostream>

class NoDefault {
  friend void print_NoDefault(const NoDefault &);
 public:
  NoDefault(int value) : value(value) {}
 private:
  int value;
};

class C {
  friend void print_C(const C &);
 public:
  C() : no_default(0) {}
 private:
  NoDefault no_default;
};

void print_NoDefault(const NoDefault &nd);

void print_C(const C &c);

#endif //LEARN_CPP_PRIMER_EX7_43_H

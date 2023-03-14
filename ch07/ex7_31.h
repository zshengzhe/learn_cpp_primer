/**
 * Created by Linus Zhang on 2023/2/15.
 */

#ifndef LEARN_CPP_PRIMER_EX7_31_H
#define LEARN_CPP_PRIMER_EX7_31_H

class Y;

class X {
 private:
  Y *y = nullptr;
};

class Y {
 private:
  X x;
};

#endif //LEARN_CPP_PRIMER_EX7_31_H

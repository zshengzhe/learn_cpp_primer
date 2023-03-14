/**
 * Created by Linus Zhang on 2023/2/12.
 */

#ifndef LEARN_CPP_PRIMER_EX7_5_H
#define LEARN_CPP_PRIMER_EX7_5_H

#include <string>

using std::string;

class Person {
  string name;
  string address;

 public:
  auto get_name() const -> std::string const & { return name; }
  auto get_address() const -> std::string const & { return address; }
};

#endif //LEARN_CPP_PRIMER_EX7_5_H

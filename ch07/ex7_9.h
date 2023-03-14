/**
 * Created by Linus Zhang on 2023/2/12.
 */

#ifndef LEARN_CPP_PRIMER_EX7_9_H
#define LEARN_CPP_PRIMER_EX7_9_H

#include <string>
#include <iostream>

using std::string;

struct Person {
  string name;
  string address;

  string get_name() const { return name; }
  string get_address() const { return address; }
};

std::istream &read(std::istream &is, Person &person)
{
  is >> person.name >> person.address;
  return is;
}

std::ostream &print(std::ostream &os, const Person &person)
{
  return os << person.get_name() << " " << person.get_address();
}

#endif //LEARN_CPP_PRIMER_EX7_9_H

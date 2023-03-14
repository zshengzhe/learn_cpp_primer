/**
 * Created by Linus Zhang on 2023/2/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_22_H
#define LEARN_CPP_PRIMER_EX7_22_H

#include <string>
#include <iostream>

using std::string;

class Person {
  friend std::istream &read(std::istream &is, Person &person);
  friend std::ostream &print(std::ostream &os, const Person &person);

 public:
  Person() = default;
  Person(const string &name, const string &address) : name(name), address(address) {}
  Person(std::istream &is)
  {
    read(is, *this);
  }
  string get_name() const { return name; }
  string get_address() const { return address; }

 private:
  string name;
  string address;
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

#endif //LEARN_CPP_PRIMER_EX7_22_H

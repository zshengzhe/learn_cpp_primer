/**
 * Created by Linus Zhang on 2023/3/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_50_H
#define LEARN_CPP_PRIMER_EX7_50_H

#include <string>
#include <iostream>

class Person {
  friend std::istream &read(std::istream &is, Person &person);
  friend std::ostream &print(std::ostream &os, Person &person);
 public:
  Person() = default;
  Person(const std::string name, const std::string addr) : name(name), address(addr) {}
  explicit Person(std::iostream &is) { read(is, *this); }

  std::string getName() const { return name; }
  std::string getAddress() const { return address; }
 private:
  std::string name;
  std::string address;
};

std::istream &read(std::istream &is, Person &person)
{
  is >> person.name >> person.address;
  return is;
}

std::ostream &print(std::ostream &os, Person &person)
{
  os << person.name << " " << person.address;
  return os;
}

#endif //LEARN_CPP_PRIMER_EX7_50_H

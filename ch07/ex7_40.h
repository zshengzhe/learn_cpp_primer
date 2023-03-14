/**
 * Created by Linus Zhang on 2023/2/16.
 */

#ifndef LEARN_CPP_PRIMER_EX7_40_H
#define LEARN_CPP_PRIMER_EX7_40_H

#include <iostream>
#include <string>

class Book {

 public:
  Book(unsigned isbn, std::string name, std::string author, std::string pub_date)
      : isbn(isbn), name(name), author(author), pub_date(pub_date) {}
  Book(std::istream &is)
  {
    is >> isbn >> name >> author >> pub_date;
  }

 private:
  unsigned isbn;
  std::string name;
  std::string author;
  std::string pub_date;
};

#endif //LEARN_CPP_PRIMER_EX7_40_H

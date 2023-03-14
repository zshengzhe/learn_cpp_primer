/**
 * Created by Linus Zhang on 2023/2/16.
 */

#ifndef LEARN_CPP_PRIMER_EX7_42_H
#define LEARN_CPP_PRIMER_EX7_42_H

#include <iostream>
#include <string>

class Book {

 public:
  Book() : Book(0) {}
  Book(unsigned isbn) : Book(isbn, "", "", "") {}
  Book(unsigned isbn, std::string name) : Book(isbn, name, "", "") {}
  Book(unsigned isbn, std::string name, std::string author) : Book(isbn, name, author, "") {}
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

#endif //LEARN_CPP_PRIMER_EX7_42_H

/**
 * Created by Linus Zhang on 2023/2/16.
 */

#ifndef LEARN_CPP_PRIMER_EX7_41_H
#define LEARN_CPP_PRIMER_EX7_41_H
#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

class Sales_data {
  friend istream &read(istream &is, Sales_data &item);
  friend ostream &print(ostream &os, const Sales_data &item);
  friend Sales_data add(const Sales_data &s1, const Sales_data &s2);
 public:
  Sales_data() : Sales_data("")
  {
    std::cout << "Sales_data()" << std::endl;
  }

  Sales_data(const string &bookNo) : Sales_data(bookNo, 0, 0)
  {
    std::cout << "Sales_data(const string&)" << std::endl;
  }

  Sales_data(const string &bookNo, const unsigned units_sold, const double revenue)
      : bookNo(bookNo), units_sold(units_sold), revenue(units_sold * revenue)
  {
    std::cout << "Sales_data(const string&, const unsigned, const double)" << std::endl;
  }

  Sales_data(istream &is) { read(is, *this); }

  string isbn() const { return bookNo; }

  Sales_data &combine(const Sales_data &);

  Sales_data &print();

 private:
  inline double ave_price() const;

 private:
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

inline
double Sales_data::ave_price() const
{
  return units_sold ? revenue / units_sold : 0;
}

#endif //LEARN_CPP_PRIMER_EX7_41_H

/**
 * Created by Linus Zhang on 2023/2/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_21_H
#define LEARN_CPP_PRIMER_EX7_21_H
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
  Sales_data() : bookNo(""), units_sold(0), revenue(0) {}

  Sales_data(const string &bookNo) : bookNo(bookNo) {}

  Sales_data(const string &bookNo, const unsigned units_sold, const double revenue)
      : bookNo(bookNo), units_sold(units_sold), revenue(units_sold * revenue) {}

  Sales_data(istream &is)
  {
    read(is, *this);
  }

  string isbn() const
  {
    return bookNo;
  }

  Sales_data &combine(const Sales_data &);

 private:
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &that)
{
  this->units_sold += that.units_sold;
  this->revenue += that.revenue;

  return *this;
}

Sales_data add(const Sales_data &s1, const Sales_data &s2)
{
  Sales_data sum = s1;
  sum.combine(s2);

  return sum;
}

istream &read(istream &is, Sales_data &item)
{
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
  return os << item.isbn() << " " << item.units_sold << " " << item.revenue;
}

#endif //LEARN_CPP_PRIMER_EX7_21_H
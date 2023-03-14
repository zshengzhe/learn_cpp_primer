/**
 * Created by Linus Zhang on 2023/2/12.
 */

#ifndef LEARN_CPP_PRIMER_EX7_6_H
#define LEARN_CPP_PRIMER_EX7_6_H
#include <string>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

struct Sales_data {
  string isbn() const
  {
    return bookNo;
  }

  Sales_data &combine(const Sales_data &);

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

istream read(istream &is, Sales_data &item)
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

#endif //LEARN_CPP_PRIMER_EX7_6_H

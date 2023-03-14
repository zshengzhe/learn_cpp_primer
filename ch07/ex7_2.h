/**
 * Created by Linus Zhang on 2023/2/12.
 */

#ifndef LEARN_CPP_PRIMER_EX7_2_H
#define LEARN_CPP_PRIMER_EX7_2_H
#include <string>
using std::string;

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

#endif //LEARN_CPP_PRIMER_EX7_2_H

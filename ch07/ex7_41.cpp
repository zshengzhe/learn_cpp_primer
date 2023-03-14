/**
 * Created by Linus Zhang on 2023/2/16.
 */
#include "ex7_41.h"

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

Sales_data &Sales_data::print()
{
  ::print(std::cout, *this);
  return *this;
}
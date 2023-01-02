/**
 * Created by Linus Zhang on 2022/12/28.
 */

#ifndef CH02_SALES_DATA_H
#define CH02_SALES_DATA_H

#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;

};

#endif //CH02_SALES_DATA_H

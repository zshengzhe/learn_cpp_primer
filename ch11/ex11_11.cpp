/**
 * Created by Linus Zhang on 2023/4/23.
 */
#include "../ch07/ex7_26.h"
#include <set>

using Less = bool (*)(const Sales_data &, const Sales_data &);

std::multiset<Sales_data, Less> bookstore;
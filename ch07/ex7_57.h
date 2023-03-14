/**
 * Created by Linus Zhang on 2023/3/13.
 */

#ifndef LEARN_CPP_PRIMER_EX7_57_H
#define LEARN_CPP_PRIMER_EX7_57_H

#include <string>

class Account {
 public:
  void calculate() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double newRate) { interestRate = newRate; }

 private:
  std::string owner;
  double amount;

  static double interestRate;
  static constexpr double todayRate = 42.42;
  static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif //LEARN_CPP_PRIMER_EX7_57_H

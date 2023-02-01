/**
 * Created by Linus Zhang on 2023/1/31.
 */
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

string show_score_level(int grade);

const vector<string> SCORES = {"F", "D", "C", "B", "A", "A++"};

int main()
{
  int grade;
  while (std::cin >> grade) {
    std::cout << "grade : " << grade << ", level : " << show_score_level(grade) << std::endl;
  }
  return 0;
}

string show_score_level(int grade)
{
  return grade < 60 ? SCORES[0] : (SCORES[(grade - 50) / 10]
      + ((grade == 100) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : ""));
}
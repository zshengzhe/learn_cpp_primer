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
  if (grade < 60) {
    return SCORES[0];
  } else {
    string score = SCORES[(grade - 50) / 10];
    if (grade != 100) {
      if (grade % 10 > 7) {
        score += "+";
      } else if (grade % 10 < 3) {
        score += "-";
      }
    }
    return score;
  }
}
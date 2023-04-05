/**
 * Created by Linus Zhang on 2023/3/16.
 */
#include <vector>

using std::vector;

vector<int> vec1; // empty
vector<int> vec2(10); // 0
vector<int> vec3(10, 1); // 1 1 1 1 1 1 1 1 1 1
vector<int> vec4{1, 2, 3, 4, 5, 6}; // 1 2 3 4 5 6
vector<int> vec5(vec4); // same as vec4
vector<int> vec6(vec5.cbegin(), vec5.cend()); // same as vec5
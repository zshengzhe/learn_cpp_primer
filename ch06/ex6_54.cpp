/**
 * Created by Linus Zhang on 2023/2/12.
 */
#include <vector>
using std::vector;

int fun(int a, int b);

using pFunc1 = decltype(fun) *;
typedef decltype(fun) *pFunc2;
std::vector<pFunc1> vec1;
std::vector<pFunc2> vec2;

using pFunc3 = int (*)(int a, int b);
using pFunc4 = int(int a, int b);
std::vector<pFunc3> vec3;
std::vector<pFunc4 *> vec4;

typedef int(*pFunc5)(int a, int b);
using pFunc6 = decltype(fun);
std::vector<pFunc5> vec5;
std::vector<pFunc6 *> vec6;
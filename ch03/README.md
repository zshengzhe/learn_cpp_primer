## Exercise 3.1

[ex3_1a](ex3_1a.cpp)

[ex3_1b](ex3_1b.cpp)

## Exercise 3.2

[ex3_2a](ex3_2a.cpp)

[ex3_2b](ex3_2b.cpp)

## Exercise 3.3

> Explain how whitespace characters are handled in the string
> input operator and in the `getline` function.

* For code like `is >> s`, input is separated by whitespaces while reading into string `s`.
* For code like `getline(is, s)` input is separated by newline `\n` while reading into string `s`. Other whitespaces are
  ignored.
* For code like `getline(is, s, delim)`input is separated by `delim` while reading into string `s`. All whitespaces are
  ignored.

## Exercise 3.4

[ex3_4a](ex3_4a.cpp)

[ex3_4b](ex3_4b.cpp)

## Exercise 3.5

[ex3_5a](ex3_5a.cpp)

[ex3_5b](ex3_5b.cpp)

## [Exercise 3.6](ex3_6.cpp)

## Exercise 3.7

> What would happen if you define the loop control variable in the previous
> exercise as type char? Predict the results and then change your program
> to use a char to see if you were right.

The point here is using reference to mutate a string. If changed to something like below, `c` would become a `char`
rather than `char&`. In such case, `c` is a copy of each character of string `str`, thus the assignment `c = 'X'` won't
mutate `str`. As a result, after this for range statement, nothing changes.

[ex3_7](ex3_7.cpp)

## [Exercise 3.8](ex3_8.cpp)

## Exercise 3.9

> What does the following program do? Is it valid? If not, why not?

```cpp
string s;
cout << s[0] << endl;
```

This code was dereferencing and printing the first item stored in `s`. Since `s` is empty, such operation is invalid,
a.k.a. **undefined behavior**.

## [Exercise 3.10](ex3_10.cpp)

## Exercise 3.11

> Is the following range for legal? If so, what is the type of c?

```cpp
const string s = "Keep out!";
for (auto &c : s){ /*... */ }
```

Depending on the code within for loop body. For example:

    cout << c;  // legal.
    c = 'X';    // illegal.

The type of `c` is `const char&`.

## Exercise 3.12

> Which, if any, of the following vector definitions are in error?
> For those that are legal, explain what the definition does.
> For those that are not legal, explain why they are illegal.

```cpp
vector<vector<int>> ivec;         // legal(c++11), vectors.
vector<string> svec = ivec;       // illegal, different type.
vector<string> svec(10, "null");  // legal, vector have 10 strings: "null".
```

## Exercise 3.13

> How many elements are there in each of the following
> vectors? What are the values of the elements?

```cpp
vector<int> v1;         // size:0,  no values.
vector<int> v2(10);     // size:10, value:0
vector<int> v3(10, 42); // size:10, value:42
vector<int> v4{ 10 };     // size:1,  value:10
vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
vector<string> v6{ 10 };  // size:10, value:""
vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
```

## [Exercise 3.14](ex3_14.cpp)

## [Exercise 3.15](ex3_15.cpp)

## [Exercise 3.16](ex3_16.cpp)

## [Exercise 3.17](ex3_17.cpp)

## Exercise 3.18

```c++
vector<int> ivec;
ivec[0] = 42;
// illegal vector<int> ivec{42};
```

## [Exercise 3.19](ex3_19.cpp)

## Exercise 3.20

[ex3_20a](ex3_20a.cpp)

[ex3_20b](ex3_20b.cpp)

## [Exercise 3.21](ex3_21.cpp)

## [Exercise 3.22](ex3_22.cpp)

## [Exercise 3.23](ex3_23.cpp)

## Exercise 3.24

[ex3_24a](ex3_24a.cpp)

[ex3_24b](ex3_24b.cpp)
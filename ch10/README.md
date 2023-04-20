# Chapter 10. Generic Algorithms

## [Exercise 10.1](ex10_1.cpp)

## [Exercise 10.2](ex10_2.cpp)

## [Exercise 10.3](ex10_3.cpp)

## [Exercise 10.4](ex10_4.cpp)

> The output is 4 rather than 4.9 as expected.
> The reason is std::accumulate is a template function. The third parameter is _Tp __init
> When "0" , an integer, had been specified here, the compiler deduced _Tp as
> integer.As a result , when the following statements were being executed :

```c++
for (; __first != __last; ++__first)
  __init = __init + *__first;
return __init;
```

> all calculation would be converted to integer.

## Exercise 10.5:

> In the call to equal on rosters, what would happen if both rosters held C-style strings, rather than library strings?

For such case, std::equal is going to compare the address value rather than the string value.
So the result is not the same as std::string. Try to avoid coding this way.
Check [#227](https://github.com/Mooophy/Cpp-Primer/issues/227) for more detail.

## [Exercise 10.6](ex10_6.cpp)

## [Exercise 10.7](ex10_7.cpp)

## Exercise 10.8:

> We said that algorithms do not change the size of the containers over which they operate. Why doesn't the use of
> back_inserter invalidate this claim?

Inserters like `back_inserter` is part of `<iterator>` rather than `<algorithm>`.

## [Exercise 10.9](ex10_9.cpp)

## Exercise 10.10:

> Why do you think the algorithms don’t change the size of containers?

@Mooophy:
The aim of this design is to separate the algorithms and the operation provided by member function.

@pezy:
Cause the library algorithms operate on **iterators**, **not containers**. Thus, an algorithm **cannot (directly)** add
or remove elements.

## [Exercise 10.11](ex10_11.cpp)

## [Exercise 10.12](ex10_12.cpp)

## [Exercise 10.13](ex10_13.cpp)

## [Exercise 10.14](ex10_14.cpp):

> Write a lambda that takes two ints and returns their sum.

```cpp
auto add = [](int a, int b){ return a + b; };
```

## [Exercise 10.15](ex10_15.cpp):

> Write a lambda that captures an int from its enclosing function and takes an int parameter.
> The lambda should return the sum of the captured int and the int parameter.

```cpp
int i = 42;
auto add = [i](int num){ return i + num; };
```

## [Exercise 10.16](ex10_16.cpp)

## [Exercise 10.17](ex10_17.cpp)

## [Exercise 10.18](ex10_18.cpp)

## [Exercise 10.19](ex10_19.cpp)

## [Exercise 10.20](ex10_20.cpp)

## [Exercise 10.21](ex10_21.cpp)

## [Exercise 10.22](ex10_22.cpp)

## Exercise 10.23:

> How many arguments does bind take?

Assuming the function to be bound have `n` parameters, bind take `n + 1` parameters.
The additional one is for the function to be bound itself.

## [Exercise 10.24](ex10_24.cpp)

## [Exercise 10.25](ex10_25.cpp)

## Exercise 10.26:

> Explain the differences among the three kinds of insert iterators.

- `back_inserter` uses `push_back`.
- `front_inserter` uses `push_front`.
- `insert` uses `insert`

> This function takes a second argument, which must be an iterator into the given container. Elements are inserted ahead
> of the element denoted by the given iterator.

## [Exercise 10.27](ex10_27.cpp)

## [Exercise 10.28](ex10_28.cpp)

## [Exercise 10.29](ex10_29.cpp)

## [Exercise 10.30](ex10_30.cpp)

## [Exercise 10.31](ex10_31.cpp)

## [Exercise 10.32](ex10_32.cpp)

## [Exercise 10.33](ex10_33.cpp)

## [Exercise 10.34](ex10_34.cpp)

## [Exercise 10.35](ex10_35.cpp)

## [Exercise 10.36](ex10_36.cpp)

## [Exercise 10.37](ex10_37.cpp)

## Exercise 10.38:

> List the five iterator categories and the operations that each supports.

- Input iterators : `==`, `!=`, `++`, `*`, `->`
- Output iterators : `++`, `*`
- Forward iterators : `==`, `!=`, `++`, `*`, `->`
- Bidirectional iterators : `==`, `!=`, `++`, `--`, `*`, `->`
- Random-access iterators : `==`, `!=`, `<`, `<=`, `>`, `>=`, `++`, `--`, `+`, `+=`, `-`, `-=`, `-`(two
  iterators), `*`, `->`, `iter[n]` == `* (iter + n)`

## Exercise 10.39:

> What kind of iterator does a list have? What about a vector?

`list` have the **Bidirectional iterators**.  `vector` have the **Random-access iterators**.

## Exercise 10.40:

> What kinds of iterators do you think copy requires? What about reverse or unique?

- `copy` : first and second are Input iterators, last is Output iterators.
- `reverse` : Bidirectional iterators.
- `unique` : Forward iterators.

## Exercise 10.41:

> Based only on the algorithm and argument names, describe the operation that the each of the following library
> algorithms performs:

```cpp
replace(beg, end, old_val, new_val); // replace the old_elements in the input range as new_elements.
replace_if(beg, end, pred, new_val); // replace the elements in the input range which pred is true as new_elements.
replace_copy(beg, end, dest, old_val, new_val); // copy the new_elements which is old_elements in the input range into dest.
replace_copy_if(beg, end, dest, pred, new_val); // copy the new_elements which pred is true in the input range into dest.
```

## [Exercise 10.42](ex10_42.cpp)
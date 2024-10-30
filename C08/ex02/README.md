
# Exercise 02 : ft_abs.h

This README provides a detailed explanation of the `ABS` macro defined in the `ft_abs.h` file. 

## What is a Macro?

In C, a **macro** is an instruction for the compiler's preprocessor. It allows you to define expressions, constants, or small "functions" that can be directly replaced by the compiler before the program is compiled. This can simplify the code, avoid repetition, and even improve performance since there’s no function call at runtime.

## What is Absolute Value?

The **absolute value** of a number is the distance between the number and zero on the number line, regardless of direction. This means the absolute value of any number is always positive. For example:
- The absolute value of `5` is `5`.
- The absolute value of `-5` is `5`.

## Structure of the `ft_abs.h` File

This file is a **header file** in C, containing declarations of functions, macros, and definitions that other files can include and use.

Here is the code inside `ft_abs.h`:

```c
// ft_abs.h
#ifndef FT_ABS_H
#define FT_ABS_H

#define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
```

### Explanation of Each Part

#### `#ifndef FT_ABS_H` and `#define FT_ABS_H`

- `#ifndef` means "if not defined." This line checks if `FT_ABS_H` has already been defined.
- `#define FT_ABS_H` defines the `FT_ABS_H` macro.
- These two lines, along with `#endif` at the end, are used to prevent **duplicate inclusion** of this file in the program. This technique is called **inclusion guards**.

#### `#define ABS(Value)`

This line defines the `ABS` macro, which takes a parameter `Value`. The macro substitutes all occurrences of `ABS(Value)` with the absolute value of `Value`.

#### `((Value) < 0 ? -(Value) : (Value))`

This is the main expression of the macro and works as follows:

- `((Value) < 0 ? -(Value) : (Value))` is a conditional (ternary) expression in C.
- It checks if `Value` is less than `0`:
  - If `Value` is negative (less than 0), the macro returns `-(Value)`, converting it to a positive number.
  - If `Value` is not negative, it returns `Value` as it is since it’s already positive or zero.
  
### Example

Here’s an example program demonstrating the use of `ABS`:

```c
#include "ft_abs.h"
#include <stdio.h>

int main() {
    int x = -5;
    int y = 10;

    printf("ABS(x) = %d\n", ABS(x));  // Result: 5
    printf("ABS(y) = %d\n", ABS(y));  // Result: 10

    return 0;
}
```

In this example:
- The macro `ABS(x)` is replaced by `((x) < 0 ? -(x) : (x))`, resulting in `5` for `x`.
- For `y`, as it’s already positive, `ABS(y)` simply returns `10`.

### Summary

- The `ABS` macro calculates the absolute value of any number or expression passed as `Value`.
- It uses a conditional expression to check if the value is negative. If it is, the value is made positive.
- Inclusion guards (`#ifndef`, `#define`, `#endif`) prevent the file from being included multiple times in the same program.

Header files like `ft_abs.h` are commonly used to define small macros, constants, and function prototypes in C, allowing different parts of the program to share these elements without code duplication.

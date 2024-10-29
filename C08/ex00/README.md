# Exercise 00 : ft.h

## ft.h - Header File Explanation

This `ft.h` file is a **header file** in C, used to define prototypes of functions that can be used across other code files without needing to repeat their definitions. Here’s a detailed explanation of each section:

## 1. Inclusion Guard (`#ifndef FT_H` / `#define FT_H` / `#endif`)

These lines form an **inclusion guard**. They prevent the compiler from including the contents of `ft.h` multiple times, which avoids redefinition errors.

- `#ifndef FT_H`: Checks if the symbol `FT_H` is **not** defined.
- `#define FT_H`: Defines the symbol `FT_H`, marking that the file has been included.

With this structure, if `ft.h` is included again elsewhere in the code, the compiler will recognize that `FT_H` is already defined and **ignore the inclusion**. The `#endif` closes this guard.

## 2. Function Prototypes

Each line between `#define FT_H` and `#endif` is a **function prototype** declaration. A prototype informs the compiler of the function's name, return type, and parameters, allowing other parts of the code to use these functions correctly. Here is an explanation for each:

```c
void ft_putchar(char c);
```
- **Function Name**: `ft_putchar`
- **Return Type**: `void` (no value returned)
- **Parameter**: `char c` – a character to be displayed.
- **Expected Behavior**: Displays the character `c` to the screen.

```c
void ft_swap(int *a, int *b);
```
- **Function Name**: `ft_swap`
- **Return Type**: `void`
- **Parameters**: `int *a`, `int *b` (two pointers to integers).
- **Expected Behavior**: Swaps the values at addresses `a` and `b`.

```c
void ft_putstr(char *str);
```
- **Function Name**: `ft_putstr`
- **Return Type**: `void`
- **Parameter**: `char *str` (pointer to a string).
- **Expected Behavior**: Displays the string `str` to the screen.

```c
int ft_strlen(char *str);
```
- **Function Name**: `ft_strlen`
- **Return Type**: `int` (returns an integer)
- **Parameter**: `char *str`
- **Expected Behavior**: Counts and returns the number of characters in the string `str`.

```c
int ft_strcmp(char *s1, char *s2);
```
- **Function Name**: `ft_strcmp`
- **Return Type**: `int`
- **Parameters**: `char *s1`, `char *s2` (pointers to two strings).
- **Expected Behavior**: Compares the strings `s1` and `s2`. Returns `0` if they are equal; a non-zero value if they differ.

## Using `ft.h` in the Project

When we include `ft.h` in a code file, all these function prototypes become accessible, allowing the compiler to verify that the arguments and return types are correct, even if the implementation is located elsewhere.

To include `ft.h` in other files, use the `#include` directive as follows:

```c
#include "ft.h"
```

This allows other files to use functions like `ft_putchar`, `ft_swap`, and others without redeclaring or reimplementing them.

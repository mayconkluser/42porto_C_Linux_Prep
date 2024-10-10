
# Exercise 05 : ft_sqrt

This repository contains a C function that calculates the square root of a given number using an iterative approach.

## Function Overview

The function `ft_sqrt` computes the square root of a non-negative integer `nb`. The function uses a loop to check for the integer value whose square equals `nb`.

### Function Prototype

```c
int ft_sqrt(int nb);
```

### Parameters

- `nb`: The number whose square root is to be calculated. It must be a non-negative integer.

### Return Value

- The function returns the square root of `nb` as an `int` if it is a perfect square.
- If `nb` is negative, the function returns `0`, as the square root of a negative number is not defined for integers.
- If `nb` is not a perfect square, the function returns `0`.

## Code Explanation

1. **Negative Check**:
   - If `nb` is less than 0, the function immediately returns `0`, as negative numbers do not have real square roots in the domain of integers.

2. **Iterative Square Root Calculation**:
   - The function initializes a variable `i` to `1`.
   - A `while` loop runs as long as `i * i` is less than or equal to `nb`, checking if `i * i == nb`. If true, `i` is returned as the square root.
   - If no integer is found whose square equals `nb`, the function returns `0`.

## Example of Execution

For `nb = 16`, the function will compute:

\[
4 	imes 4 = 16
\]

Thus, `ft_sqrt(16)` returns `4`.

For `nb = 17`, the function will not find an integer square root, so it will return `0`.

## Edge Cases

- If `nb` is less than 0, the function returns `0`.
- If `nb` is not a perfect square, the function returns `0`.

## Full Code

```c
int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);

    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
```

## Conclusion

This function provides an efficient way to compute the integer square root of a number, returning 0 for non-perfect squares or negative inputs. It uses a simple iterative approach to find the correct value.


# Iterative Factorial in C

This repository contains a simple C function that computes the factorial of a given integer using an iterative approach.

## Function Overview

The function `ft_iterative_factorial` calculates the factorial of a number by multiplying each integer from 1 up to `nb`.

### Function Prototype

```c
int ft_iterative_factorial(int nb);
```

### Parameters

- `nb`: An integer whose factorial is to be calculated. It must be a non-negative integer.

### Return Value

- The function returns the factorial of the given integer `nb`.
- If `nb` is 0 or 1, the function returns `1` (since 0! = 1! = 1).
- If `nb` is negative, the function returns `1` by default, though the factorial for negative numbers is not defined.

## Explanation of the Algorithm

1. **Initialization**: 
   - The variables `i` (the loop counter) and `n` (the result of the factorial) are initialized to 1.
   
2. **Looping**: 
   - The function uses a `while` loop that continues as long as `i` is less than or equal to `nb`. 
   - In each iteration, `n` is multiplied by `i`, and `i` is incremented by 1.

3. **Final Result**: 
   - After the loop, the variable `n` contains the factorial of `nb` and is returned as the result.

## Example of Execution

For `nb = 5`, the function calculates:

\[
n = 1 	imes 2 	imes 3 	imes 4 	imes 5 = 120
\]

Thus, `ft_iterative_factorial(5)` returns `120`.

## Edge Cases

- If `nb` is 0 or 1, the function will immediately return 1, as per the definition of factorial.
- The behavior for negative inputs is undefined, but the function returns 1 in this case.

## Sample Code

Here is the full code of the function:

```c
int ft_iterative_factorial(int nb)
{
    int i;
    int n;

    i = 1;
    n = 1;
    while (i <= nb)
    {
        n = n * i;
        i++;
    }
    return (n);
}
```

## Conclusion

This function efficiently computes the factorial of a non-negative integer using an iterative approach, avoiding the risks of recursion and potential stack overflow for large values of `nb`.

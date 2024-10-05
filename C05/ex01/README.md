
# Recursive Factorial in C

This repository contains a C function that computes the factorial of a given integer using a recursive approach.

## Function Overview

The function `ft_recursive_factorial` calculates the factorial of a number by recursively multiplying the current number by the factorial of `nb - 1`.

### Function Prototype

```c
int ft_recursive_factorial(int nb);
```

### Parameters

- `nb`: An integer whose factorial is to be calculated. It must be a non-negative integer.

### Return Value

- The function returns the factorial of the given integer `nb` as an `int`.
- If `nb` is 0 or 1, the function returns `1` (since 0! = 1! = 1).
- If `nb` is negative, the function returns `0` to indicate that factorial is not defined for negative numbers.

## Code Explanation

1. **Base Cases**: 
   - If `nb` is less than 0, the function returns `0` as factorial is not defined for negative numbers.
   - If `nb` is 0 or 1, the function returns `1`, which is the base case for recursion.

2. **Recursive Case**:
   - If `nb` is greater than 1, the function returns `nb * ft_recursive_factorial(nb - 1)`, which keeps calling itself with `nb - 1` until it reaches the base case.

## Example of Execution

For `nb = 5`, the function will compute:

\[
5 	imes ft_recursive_factorial(4) 	imes 4 	imes 3 	imes 2 	imes 1 = 120
\]

Thus, `ft_recursive_factorial(5)` returns `120`.

## Edge Cases

- If `nb` is 0 or 1, the function returns `1`.
- If `nb` is negative, the function returns `0`.

## Full Code

```c
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}
```

## Conclusion

This function provides a simple, elegant solution for computing the factorial of a non-negative integer using recursion. It handles edge cases like negative input and uses well-defined base cases to terminate the recursion.

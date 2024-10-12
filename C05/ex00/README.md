
# Exercise 00 : ft_iterative_factorial

This repository contains a C function that computes the factorial of a given integer using an iterative approach.

## Function Overview

The function `ft_iterative_factorial` calculates the factorial of a number by using a loop to multiply the number by its decreasing predecessors.

### Function Prototype

```c
int ft_iterative_factorial(int nb);
```

### Parameters

- `nb`: An integer whose factorial is to be calculated. It must be a non-negative integer.

### Return Value

- The function returns the factorial of the given integer `nb` as a `long`.
- If `nb` is 0 or 1, the function returns `1` (since 0! = 1! = 1).
- If `nb` is negative, the function returns `0` to indicate that factorial is not defined for negative numbers.

## Code Explanation

1. **Base Cases**: 
   - If `nb` is less than 0, the function returns `0` as factorial is not defined for negative numbers.
   - If `nb` is 0 or 1, the function returns `1`, which are the base cases for the factorial.

2. **Iterative Calculation**:
   - The function initializes a variable `result` to 1, which will store the factorial result.
   - A `while` loop runs as long as `nb > 0`, multiplying `result` by the current value of `nb` and decrementing `nb` by 1.

3. **Final Result**:
   - After the loop, `result` holds the factorial of `nb` and is returned.

## Example of Execution

For `nb = 5`, the function will compute:

\[
5 	imes 4 	imes 3 	imes 2 	imes 1 = 120
\]

Thus, `ft_iterative_factorial(5)` returns `120`.

## Edge Cases

- If `nb` is 0 or 1, the function returns `1`.
- If `nb` is negative, the function returns `0`.

## Full Code

```c
int ft_iterative_factorial(int nb)
{
	long	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
```

## Conclusion

This function provides an efficient solution for computing the factorial of a non-negative integer using an iterative approach. It handles edge cases such as 0, 1, and negative numbers gracefully, while using a loop to perform the factorial calculation.

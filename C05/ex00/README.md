
# Iterative Factorial in C

This repository contains a C function that computes the factorial of a given integer using an iterative approach. The function has been updated to use `long` variables to handle larger numbers and prevent overflow for relatively larger values of `nb`.

## Function Overview

The function `ft_iterative_factorial` calculates the factorial of a number by multiplying each integer from 1 up to `nb`.

### Function Prototype

```c
long ft_iterative_factorial(int nb);
```

### Parameters

- `nb`: An integer whose factorial is to be calculated. It must be a non-negative integer.

### Return Value

- The function returns the factorial of the given integer `nb` as a `long`.
- If `nb` is 0 or 1, the function returns `1` (since 0! = 1! = 1).
- If `nb` is negative, the function returns `0` to indicate that factorial is not defined for negative numbers.

## Code Explanation

1. **Initialization**: 
   - Two variables, `i` (loop counter) and `n` (factorial result), are initialized to `1`. They are declared as `long` to handle larger values.
   
2. **Negative Check**:
   - If the input `nb` is less than 0, the function immediately returns `0`, as factorials are not defined for negative numbers.
   
3. **Looping**: 
   - A `while` loop runs as long as `i` is less than or equal to `nb`. 
   - In each iteration, `n` is multiplied by `i`, and `i` is incremented by 1.
   
4. **Final Result**: 
   - After the loop, `n` holds the factorial of `nb` and is returned as the result.

## Example of Execution

For `nb = 5`, the function will compute:

\[
n = 1 	imes 2 	imes 3 	imes 4 	imes 5 = 120
\]

Thus, `ft_iterative_factorial(5)` returns `120`.

## Edge Cases

- If `nb` is 0 or 1, the function returns `1`.
- The behavior for negative inputs is handled by returning `0`.

## Full Code

```c
long	ft_iterative_factorial(int nb)
{
	long	i;
	long	n;

	if (nb < 0)
		return (0);
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

This function efficiently computes the factorial of a non-negative integer using an iterative approach. The update to `long` helps prevent overflow when calculating larger factorials.

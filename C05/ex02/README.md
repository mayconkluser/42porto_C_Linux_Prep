
# Exercise 02 : ft_iterative_power

This repository contains a C function that calculates the result of a number raised to a given power using an iterative approach.

## Function Overview

The function `ft_iterative_power` computes the result of raising a base number (`nb`) to a given power (`power`). The function uses a loop to iteratively multiply the base number by itself, decrementing the power until it reaches 0.

### Function Prototype

```c
int ft_iterative_power(int nb, int power);
```

### Parameters

- `nb`: The base number that will be raised to the power.
- `power`: The exponent to which the base number will be raised. 

### Return Value

- The function returns the result of `nb` raised to `power` as an `int`.
- If `power` is less than 0, the function returns `0`, as negative powers are not handled.
- If `power` is `0`, the function returns `1`, since any number raised to 0 equals 1.

## Code Explanation

1. **Base Cases**:
   - If `power` is less than 0, the function returns `0`, as negative powers are not handled.
   - If `power` is `0`, the function returns `1`, since any number raised to the power of 0 is 1.

2. **Iterative Case**:
   - The function initializes a variable `result` to `1`.
   - A `while` loop runs while `power > 0`, multiplying `result` by `nb` in each iteration and decrementing `power` by 1.

3. **Final Result**:
   - After the loop, `result` holds the value of `nb` raised to the power of `power` and is returned.

## Example of Execution

For `nb = 2` and `power = 3`, the function will compute:

\[
2^3 = 2 	imes 2 	imes 2 = 8
\]

Thus, `ft_iterative_power(2, 3)` returns `8`.

## Edge Cases

- If `power` is less than 0, the function returns `0`.
- If `power` is `0`, the function returns `1`.

## Full Code

```c
int ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
```

## Conclusion

This function provides a simple and efficient solution for calculating the power of a number using an iterative approach. It handles base cases for negative numbers and zero correctly, ensuring that the function behaves appropriately for all input values.

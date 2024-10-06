
# Iterative Power Function in C

This repository contains a C function that calculates the result of a number raised to a given power using an iterative approach.

## Function Overview

The function `ft_iterative_power` computes the result of raising a base number (`nb`) to a given power (`power`). The function uses a loop to iteratively multiply the base number by itself.

### Function Prototype

```c
int ft_iterative_power(int nb, int power);
```

### Parameters

- `nb`: The base number that will be raised to the power.
- `power`: The exponent to which the base number will be raised. 

### Return Value

- The function returns the result of `nb` raised to `power` as a `long`.
- If `power` is less than 0, the function returns `0` because negative powers are not handled.
- If `power` or `nb` is `0`, the function returns `1` (since any number raised to 0 equals 1).

## Code Explanation

1. **Base Cases**:
   - If `power` or `nb` is less than 0, the function returns `0`.
   - If `power` or `nb` is `0`, the function returns `1`, as any number raised to 0 is 1.

2. **Iterative Calculation**:
   - The function initializes a variable `result` to `1`.
   - A `while` loop runs while `power > 0`, multiplying `result` by `nb` in each iteration and decrementing `power`.

3. **Final Result**:
   - After the loop, `result` holds the value of `nb` raised to the power of `power` and is returned.

## Example of Execution

For `nb = 2` and `power = 3`, the function will compute:

\[
2^3 = 2 	imes 2 	imes 2 = 8
\]

Thus, `ft_iterative_power(2, 3)` returns `8`.

## Edge Cases

- If `power` or `nb` is less than 0, the function returns `0`.
- If `power` or `nb` is `0`, the function returns `1`.

## Full Code

```c
int ft_iterative_power(int nb, int power)
{
	long	result;
	if (power < 0 || nb < 0)
		return (0);
	else if (power == 0 || nb == 0)
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

This function provides a simple and efficient solution for calculating the power of a number using an iterative approach. It handles base cases for negative numbers and zero correctly, ensuring the correct result for any input values.

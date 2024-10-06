
# Recursive Power Function in C

This repository contains a C function that calculates the result of a number raised to a given power using recursion.

## Function Overview

The function `ft_recursive_power` computes the result of raising a base number (`nb`) to a given power (`power`). The function uses recursion to multiply the base number by itself, decrementing the power in each recursive call until it reaches 0.

### Function Prototype

```c
int ft_recursive_power(int nb, int power);
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

2. **Recursive Case**:
   - The function returns `nb * ft_recursive_power(nb, power - 1)`, multiplying the base number `nb` by the result of the function called with `power - 1`.

## Example of Execution

For `nb = 2` and `power = 3`, the function will compute:

\[
2^3 = 2 	imes 2 	imes 2 = 8
\]

Thus, `ft_recursive_power(2, 3)` returns `8`.

## Edge Cases

- If `power` is less than 0, the function returns `0`.
- If `power` is `0`, the function returns `1`.

## Full Code

```c
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
```

## Conclusion

This function provides a simple and efficient recursive solution for calculating the power of a number. It handles the base cases for zero and negative powers gracefully, ensuring that the function behaves correctly for all input values.


# Exercise 06 : ft_is_prime

This repository contains a C function that checks if a given integer `nb` is a prime number using an efficient iterative approach.

## Function Overview

The function `ft_is_prime` determines if a number `nb` is a prime number. A prime number is a number greater than 1 that has no divisors other than 1 and itself. This function uses a loop to check for divisors up to the square root of `nb`.

### Function Prototype

```c
int ft_is_prime(int nb);
```

### Parameters

- `nb`: The number to check if it is prime. It must be an integer.

### Return Value

- The function returns `1` if the number is prime.
- The function returns `0` if the number is not prime or if `nb` is less than 2 (since prime numbers must be greater than 1).

## Code Explanation

1. **Initial Check for Numbers Less Than 2**:
   - If `nb` is less than 2, the function returns `0`, as no numbers less than 2 are prime.

2. **Iterative Check for Divisibility**:
   - The function uses a loop starting from `i = 2`.
   - The loop runs while `i * i <= nb`, meaning it checks divisors only up to the square root of `nb`.
   - For each `i`, it checks if `nb % i == 0`. If this condition is true, it means `nb` is divisible by `i`, so the number is not prime, and the function returns `0`.

3. **Return Value**:
   - If the loop finishes without finding any divisors, the function returns `1`, meaning `nb` is prime.

## Example of Execution

For `nb = 29`, the function will compute:

- Check if `29 % 2 == 0` → False
- Check if `29 % 3 == 0` → False
- Check if `29 % 4 == 0` → False
- Check if `29 % 5 == 0` → False
- Since no divisors were found, `ft_is_prime(29)` returns `1`.

For `nb = 28`, the function will compute:

- Check if `28 % 2 == 0` → True
- The function immediately returns `0`, as 28 is divisible by 2 and is not prime.

## Edge Cases

- If `nb` is less than 2, the function returns `0`.
- If `nb` is a prime number, the function returns `1`.

## Full Code

```c
int	ft_is_prime(int nb)
{
	int		i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
```

## Conclusion

This function provides an efficient way to check if a number is prime by limiting the divisibility tests to numbers up to the square root of `nb`. It handles edge cases for numbers less than 2 and correctly identifies prime and non-prime numbers.

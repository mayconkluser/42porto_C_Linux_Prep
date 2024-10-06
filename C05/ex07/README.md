
# Prime Number and Next Prime Finder in C

This repository contains two C functions that work together to determine if a number is prime and to find the next prime number that is greater than or equal to a given integer.

## Function Overview

### 1. Prime Number Checker - `ft_is_prime(int nb)`
The function `ft_is_prime` checks whether a given integer `nb` is a prime number.

### 2. Next Prime Finder - `ft_find_next_prime(int nb)`
The function `ft_find_next_prime` finds the smallest prime number that is greater than or equal to the given integer `nb`.

## Function Prototypes

```c
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
```

### Parameters

- `nb`: An integer representing the number to check for primality or find the next prime.

## Return Values

- `ft_is_prime` returns `1` if the number is prime and `0` if the number is not prime.
- `ft_find_next_prime` returns the next prime number that is greater than or equal to `nb`.

## Code Explanation

### 1. Prime Number Checker - `ft_is_prime`

1. **Check for numbers less than 2**:
   - Numbers less than 2 are not prime, so the function returns `0` for those cases.
   
2. **Loop for divisibility**:
   - The function checks if the number `nb` is divisible by any integer `i` starting from 2 up to the square root of `nb`. If `nb` is divisible by `i`, the function returns `0`, meaning `nb` is not prime.
   - If no divisor is found, the function returns `1`, indicating that `nb` is prime.

### 2. Next Prime Finder - `ft_find_next_prime`

1. **Check if the given number is prime**:
   - The function first calls `ft_is_prime` to check if `nb` itself is a prime number. If so, it returns `nb`.

2. **Increment until the next prime is found**:
   - If `nb` is not prime, the function enters a loop, incrementing `nb` by 1 in each iteration. It continues to check for primality using `ft_is_prime` until it finds the next prime number.

## Example of Execution

For `nb = 10`:

1. The function `ft_is_prime(10)` returns `0`, as 10 is not prime.
2. The function `ft_find_next_prime(10)` increments `nb` to 11 and finds that 11 is prime, returning 11 as the next prime number.

For `nb = 17`:

1. The function `ft_is_prime(17)` returns `1`, as 17 is prime.
2. The function `ft_find_next_prime(17)` returns 17, since it is already prime.

## Full Code

```c
int	ft_is_prime(int nb)
{
	int	i;
	
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (nb++)
	{
		if (ft_is_prime(nb))
			return (nb);
	}
}
```

## Conclusion

These functions efficiently check whether a number is prime and find the next prime number greater than or equal to a given integer. The `ft_is_prime` function limits its divisibility checks to numbers up to the square root of `nb`, ensuring efficient primality testing, while `ft_find_next_prime` iterates until it finds the next prime.

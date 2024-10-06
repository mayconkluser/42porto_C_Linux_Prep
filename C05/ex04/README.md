
# Fibonacci Sequence in C

This repository contains a C function that computes the Fibonacci sequence for a given index using recursion.

## Function Overview

The function `ft_fibonacci` calculates the Fibonacci number at a specific position in the sequence. The Fibonacci sequence is defined as:

\[
F(0) = 0, \quad F(1) = 1, \quad F(n) = F(n - 1) + F(n - 2) \quad 	ext{for} \quad n > 1
\]

### Function Prototype

```c
int ft_fibonacci(int index);
```

### Parameters

- `index`: An integer representing the position in the Fibonacci sequence whose value is to be computed. 

### Return Value

- The function returns the Fibonacci number at the given `index` as an `int`.
- If `index` is less than 0, the function returns `-1` to indicate an invalid input.

## Code Explanation

1. **Base Cases**:
   - If `index` is less than 0, the function returns `-1`, indicating that the Fibonacci sequence is not defined for negative indices.
   - If `index` is 0, the function returns `0` (since F(0) = 0).
   - If `index` is 1, the function returns `1` (since F(1) = 1).

2. **Recursive Case**:
   - For any `index` greater than 1, the function recursively calls itself to compute the sum of the Fibonacci numbers at positions `index - 1` and `index - 2`.

## Example of Execution

For `index = 5`, the function will compute:

\[
F(5) = F(4) + F(3) = (F(3) + F(2)) + (F(2) + F(1)) = 5
\]

Thus, `ft_fibonacci(5)` returns `5`.

## Edge Cases

- If `index` is less than 0, the function returns `-1` as an error value.
- If `index` is 0 or 1, the function returns the corresponding Fibonacci number.

## Full Code

```c
int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
```

## Conclusion

This function provides an elegant recursive solution to calculate the Fibonacci sequence for a given index. It handles negative indices by returning an error value and uses recursion to compute Fibonacci numbers for positive indices.

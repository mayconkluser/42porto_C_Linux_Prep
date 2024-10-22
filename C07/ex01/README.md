
# Exercise 01 : ft_range

This README provides an explanation of the `ft_range` function in C, which creates an array of integers containing all values from `min` (inclusive) to `max` (exclusive).

## Function Overview

1. **Range Creator - ft_range(int min, int max)**
   - The `ft_range` function dynamically allocates memory for an array of integers that contains all integers starting from `min` and ending at `max - 1`.

## Function Prototype

```c
int *ft_range(int min, int max);
```

### Parameters
- **min**: The starting value (inclusive) of the range.
- **max**: The ending value (exclusive) of the range.

### Return Values
- The `ft_range` function returns a pointer to the dynamically allocated array of integers.
- If `min` is greater than or equal to `max`, or if memory allocation fails, the function returns `NULL`.

## Code Explanation

### Range Creator - ft_range
   - The function checks if `min` is greater than or equal to `max`. If so, it returns `NULL` since there is no valid range.
   - The function allocates memory for an array of size `max - min`, which represents the number of integers in the range from `min` to `max - 1`.
   - If `malloc` fails and returns `NULL`, the function exits early.
   - The function fills the array with integers from `min` to `max - 1` by iterating through the range and incrementing `min` with each step.

## Memory Management

It is important to note that the caller is responsible for freeing the memory allocated by `ft_range` when it is no longer needed.

## Example Code

```c
#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
    int *array;
    int i;

    if (min >= max)
        return (NULL);
    array = (int *)malloc((max - min) * sizeof(int));
    if (!array)
        return (NULL);
    i = 0;
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Use: %s <min> <max>\n", argv[0]);
		return (1);
	}

	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	*range = ft_range(min, max);
	if (!range)
	{
		printf("Error: min must be less than max.\n");
		return (1);
	}
	
	int	size = max - min;
	int	i = 0;
	printf("Array of integers: ");
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);
}

```

## Conclusion

The `ft_range` function is a useful utility in C for generating arrays of integers within a specified range. It dynamically allocates memory to store the range and returns a pointer to the array. When using this function, it is essential to handle memory management correctly by freeing the allocated memory once it is no longer in use.

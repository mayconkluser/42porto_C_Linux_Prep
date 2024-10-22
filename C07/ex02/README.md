
# Execise 02 : ft_ultimate_range

This README provides an explanation of the `ft_ultimate_range` function in C, which creates an array of integers containing all values from `min` (inclusive) to `max` (exclusive) and stores the pointer to this array in the provided `range` argument.

## Function Overview

1. **Range Creator - ft_ultimate_range(int **range, int min, int max)**
   - The `ft_ultimate_range` function dynamically allocates memory for an array of integers that contains all integers starting from `min` and ending at `max - 1`.
   - The address of the allocated array is stored in `*range`.
   - If `min` is greater than or equal to `max`, the function returns `-1` and sets `*range` to `NULL`.

## Function Prototype

```c
int ft_ultimate_range(int **range, int min, int max);
```

### Parameters
- **range**: A double pointer to an integer array where the address of the allocated memory will be stored.
- **min**: The starting value (inclusive) of the range.
- **max**: The ending value (exclusive) of the range.

### Return Values
- The `ft_ultimate_range` function returns the size of the allocated array (i.e., `max - min`).
- If `min` is greater than or equal to `max`, or if memory allocation fails, the function returns `-1` and sets `*range` to `NULL`.

## Code Explanation

### Range Creator - ft_ultimate_range
   - The function checks if `min` is greater than or equal to `max`. If so, it sets `*range` to `NULL` and returns `-1`, indicating an invalid range.
   - It calculates the size of the range (`max - min`) and allocates memory for an array of integers.
   - If `malloc` fails and returns `NULL`, the function sets `*range` to `NULL` and returns `-1`.
   - The function then fills the array with integers from `min` to `max - 1` by iterating through the range.
   - Finally, the function assigns the allocated array to `*range` and returns the size of the range.

## Memory Management

It is important to note that the caller is responsible for freeing the memory allocated by `ft_ultimate_range` when it is no longer needed.

## Example Code

```c
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *array;
    int i;
    int size;

    if (min >= max)
    {
        *range = NULL;
        return (-1);
    }
    size = max - min;
    array = (int *)malloc(size * sizeof(int));
    if (!array)
    {
        *range = NULL;
        return (-1);
    }
    i = 0;
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    *range = array;
    return (size);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Use: %s <min> <max>\n", argv[0]);
		return (1);
	}

	int *range;
	int	i;
	int	min = atoi(argv[1]);
	int	max = atoi(argv[2]);
	int	size = ft_ultimate_range(&range, min, max);

	if (size == -1)
		printf("Error: Could not allocate memory or invalid range.");
	else
	{
		printf("Array of size %d: ", size);
		i = 0;
		while (i < size)
		{
			printf("%d ", range[i]);
			i++;
		}
		printf("\n");
	}
	free(range);
	return (0);
}

```

## Conclusion

The `ft_ultimate_range` function is an enhanced version of `ft_range` that stores the address of the dynamically allocated array in a provided pointer. It offers a flexible way to create ranges of integers and handle dynamic memory allocation. Correct memory management is essential, and users must free the allocated memory once it is no longer needed.

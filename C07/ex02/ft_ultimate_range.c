#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if(!array)
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

/*
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
 */

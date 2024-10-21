#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	*array;
	int	i;

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

/*
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
 */

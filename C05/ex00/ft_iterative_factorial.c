#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int	n;

	i = 1;
	n = 1;
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}

/*
int	main (int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/
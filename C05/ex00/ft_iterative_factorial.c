#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	long	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*
int	main (int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}
*/

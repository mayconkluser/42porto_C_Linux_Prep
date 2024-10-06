#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	long	result;
	if (power < 0 || nb < 0)
		return (0);
	else if (power == 0 || nb == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
 */

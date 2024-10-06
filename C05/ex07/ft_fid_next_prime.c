#include <stdio.h>
#include <stdlib.h>

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

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
 */

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = *a;
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	nb_a = 2, nb_b = 3;

	ft_swap(&nb_a, &nb_b);
	printf("a = %d, b = %d", nb_a, nb_b);
	return (0);
}
*/

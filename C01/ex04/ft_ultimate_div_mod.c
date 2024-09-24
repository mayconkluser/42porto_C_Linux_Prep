void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int	main()
{
	int	a = 10;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("a_div = %d, b_mob = %d", a, b);
	return (0);
}

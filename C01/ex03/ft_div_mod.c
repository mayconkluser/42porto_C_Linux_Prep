void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main()
{
	int	div;
	int	mod;

	ft_div_mod(10, 2, &div, &mod);
	printf("div = %d, mod = %d", div, mod);
	return (0);
}
*/

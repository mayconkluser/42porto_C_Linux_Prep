void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	int	tab_[5] = {1, 2, 3, 4, 5};
	int	i = -1;
	ft_rev_int_tab(tab_, 5);
	
	while (++i < 5)
		printf("%d, ", tab_[i]);
	return (0);
}
*/

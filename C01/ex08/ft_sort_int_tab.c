void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < size - 1)
	{
		j = -1;
		while (++j < size - 1)
			{
				if (tab[j] > tab[j + 1])
				{
					temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
				}
			}
	}
}

/*
#include <stdio.h>
int	main()
{
	int	tab_[5] = {2, 3, 5, 1, 4};
	int	i = -1;
	ft_sort_int_tab(tab_, 5);
	while (++i < 5)
		printf("%d, ", tab_[i]);
}
*/

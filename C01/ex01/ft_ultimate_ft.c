void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int	main()
{
	int	nb;
	int	*nb1 = &nb;
	int	**nb2 = &nb1;
	int	***nb3 = &nb2;
	int	****nb4 = &nb3;
	int	*****nb5 = &nb4;
	int	******nb6 = &nb5;
	int	*******nb7 = &nb6;
	int	********nb8 = &nb7;

	ft_ultimate_ft(&nb8);
	printf("%d", nb);
}

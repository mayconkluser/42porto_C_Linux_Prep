#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	nb[10];
	int	i;
	int	j;

	i = -1;
	while (++i < n)
		nb[i] = i;
	while (1)
	{
		i = -1;
		while (++i < n)
			ft_putchar(nb[i] + 48);
		if (nb[0] == 10 - n)
			break;
		write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && nb[i] == 9 - (n - 1 - i) && nb[i--]);
		nb[i]++;
		j = i;
		while(++j < n)
			nb[j] = nb[j - 1] + 1;
	}
}

/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		if (atoi(argv[1]) > 0 && atoi(argv[1]) <= 10)
			ft_print_combn(atoi(argv[1]));
		else
		{
			write(1, "The value isn't valid, please choose a valid value,", 51);
			write(1, " between 1 to 10!", 18);
		}
	}
	return (0);
}
*/

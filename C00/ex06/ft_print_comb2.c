#include <unistd.h>

void	ft_putchar(int i, int j, int k, int m)
{
	char convert_i;
	char convert_j;
	char convert_k;
	char convert_m;

	convert_i = i + 48;
	convert_j = j + 48;
	convert_k = k + 48;
	convert_m = m + 48;
	write(1, &convert_i, 1);
	write(1, &convert_j, 1);
	write(1, " ", 1);
	write(1, &convert_k, 1);
	write(1, &convert_m, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	m;

	i = -1;
	while (++i <= 9)
	{
		j = -1;
		while (++j <= 8)
		{
			k = -1;
			while (++k <= 9)
			{
				m = 0;
				while (++m <= 9)
				{
					ft_putchar(i, j, k, m);
					if (!(i == 9 && j == 8 && k == 9 && m == 9))
						write(1, ", ", 2);
				}
			}
		}
	}
}

int	main()
{
	ft_print_comb2();
	return (0);
}

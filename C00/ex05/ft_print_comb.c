#include <unistd.h>
void	ft_putchar(int i, int j, int k)
{
	char	convert_i;
	char	convert_j;
	char	convert_k;

	convert_i = i + 48;
	convert_j = j + 48;
	convert_k = k + 48;
	write(0, &convert_i, 1);
	write(0, &convert_j, 1);
	write(0, &convert_k, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar(i, j, k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	ft_print_comb();
	return (0);
}

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
		i++;	
	if (i < 2)
		return (0);	
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long nb;
	int	base_len;

	if (!is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >=base_len)
		ft_putnbr_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);	
}

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	else
		printf("Usage: %s <number> <base>\n", argv[0]);
	return (0);
}
 */

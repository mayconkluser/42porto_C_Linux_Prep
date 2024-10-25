#include <stdlib.h>
#include <stdio.h>

int		is_valid_base(char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nbr, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	int	decimal_value;
	decimal_value = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(decimal_value, base_to));
}

int	 is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (-1);
}

int	get_base_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;
	int	val;

	base_len = 0;
	sign = 1;
	result = 0;
	while (base[base_len])
		base_len++;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while ((val = get_base_value(*str, base)) != -1)
	{
		result = result * base_len + val;
		str++;
	}
	return (result * sign);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int	base_len;
	int	nbr_len;
	int tmp;
	int is_negative;
	char *result;

	base_len = 0;
	nbr_len = 1;
	is_negative = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr_len++;
		nbr = -nbr;
	}
	tmp = nbr;
	while (tmp /= base_len)
		nbr_len++;
	result = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!result)
		return (NULL);
	result[nbr_len] = '\0';
	while (nbr_len > 0)
	{
		nbr_len--;
		result[nbr_len] = base[nbr % base_len];
		nbr = nbr / base_len;
	}
	if (is_negative)
		result[0] = '-';
	return (result);
}


int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Use: %s <number> <base_from> <base_to>", argv[0]);
		return (1);
	}
	char	*nbr = argv[1];
	char	*base_from = argv[2];
	char	*base_to = argv[3];
	char	*result = ft_convert_base(nbr, base_from, base_to);

	if (result == NULL)
		printf("Error: Base invalid.\n");
	else
	{
		printf("Conversion result: %s\n", result);
		free(result);
	}
	return (0);
}


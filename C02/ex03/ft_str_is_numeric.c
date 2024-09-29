#include <stdio.h>
int ft_str_is_numeric(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_str_is_numeric(argv[1]));
	return (0);
}
*/

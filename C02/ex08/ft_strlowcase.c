#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_strlowcase(argv[1]));
	return (0);
}
 */

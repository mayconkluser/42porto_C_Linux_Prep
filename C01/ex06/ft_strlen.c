int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i]);
	return (i);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_strlen(argv[1]));
	return (0);
}
*/

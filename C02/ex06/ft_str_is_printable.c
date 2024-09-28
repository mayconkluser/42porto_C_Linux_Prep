#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

//Remove this function, it's just for testing.
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_str_is_printable(argv[1]));
	return (0);
}

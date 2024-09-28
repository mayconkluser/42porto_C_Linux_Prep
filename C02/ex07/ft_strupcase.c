#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

// Remove this function, it's just for testing.
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_strupcase(argv[1]));
	return (0);
}

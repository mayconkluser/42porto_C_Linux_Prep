#include <stdio.h> 
#include <stdlib.h> 

char *ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int i = 0;
	while (str[i] != '\0' && i != n)
	{
		dest[i] = str[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_strncpy(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
 */

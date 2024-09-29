#include <stdio.h> 
char *ft_strcpy(char *dest, char *src)
{
	int i = 0; 
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_strcpy(argv[1], argv[2]));
	return (0);
}
*/

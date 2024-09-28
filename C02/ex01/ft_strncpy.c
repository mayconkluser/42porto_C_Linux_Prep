#include <unistd.h> 
#include <stdlib.h> 
char *ft_strncpy(char *dest, char *str, unsigned int n)
{
	int i = 0;
	while (str[i] != '\0' && n != i)
	{
		dest[i] = str[i];
		// Remove this function, it's just for testing.
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return (0);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_strncpy(argv[1], argv[2], atoi(argv[3]));
	return (0);
}

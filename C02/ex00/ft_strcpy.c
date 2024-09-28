#include <unistd.h> 
char *ft_strcpy(char *dest, char *src)
{
	int i = 0; 
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		// Remove this function, it's just for testing.
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(int argc, char **argv)
{
	if (argc > 1)
		ft_strcpy(argv[1], argv[2]);
	return (0);
}

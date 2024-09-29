#include <stdio.h> 
#include <stdlib.h> 
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int srcl;
	unsigned int i;

	srcl = 0;
	while (src[srcl] != '\0')
		srcl++;
	if (size > 0)
	{
		i = 0;
		while (i <  size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (srcl);
}

/*
int main(int argc, char **argv)
{
	if (argc > 3)
	{
		// This is used to check the copied content in the dest
		// because the function only returns the size of the src.
		unsigned int cpy_length = ft_strlcpy(argv[1], argv[2], atoi(argv[3]));
		printf("This is the return of the function: %d\n", cpy_length);
		printf("This is the src copy with the limited character amount: %s", argv[1]);
	}
	return (0);
}
*/

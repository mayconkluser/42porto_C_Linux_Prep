#include <stdio.h>
#include <stdlib.h>

/*

	The strncat function is similar to strcat, but with one key difference: it allows
	you to specify the maximum number of characters to append from the second string.

	-	It starts at the end of the first string (right after the null terminator '\0').
	-	It copies up to 'n' characters from the second string to the end of the first
		string (where 'n' is the number you specify).
	-	After copying the characters, it adds a null terminator '\0' to mark the end of
		the new concatenated string.

	This function is useful when you only want to append part of the second string,
	rather than the entire string. Just like with strcat, the first string must have
	enough space to holod the additional characters.

*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 3)
		printf("%s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
 */

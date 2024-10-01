#include <stdio.h>

/*

	The strcat function is used to concatenate (or join) two strings. It takes the
	content of the second string and appends it to the end of the first string.

	-	The function starts at the end of first string (just after the null terminator
		'\0' which marks the end of the string).
	-	It copies the characters from the second string, one by one, to the end of the
		first string.
	-	After copying all the characters from the second string, it adds a new null
		terminator '\0' to mark the end of the newly concatenated string.

	It's important to note that the first string must have enough space to hold both
	the original string and the additional characters from the second string. Otherwise,
	it could lead to memory issues.

*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = 0;
	while (src[i] != '\0')
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
	if (argc > 2)
		printf("%s", ft_strcat(argv[1], argv[2]));
	return (0);
}
*/

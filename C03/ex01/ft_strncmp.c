#include <stdio.h>
#include <stdlib.h>

/*
	The strncmp funtion compares a specified number of characters from two
	strings. It works similarly to strcmp, but instead of comparing the entire strings, it
	only compares up to the first 'n' characters (the number you specify).

	-	If the first 'n' characters of both strings are the same, strncmp returns 0.
	-	If the first 'n' characters of the first string are "less" than those of the second
		string (based on ASCII values), it returns a negative number.
	-	If the first 'n' characters of the first string are "greater" than those of the
		second string, it returns a positive number.

	The function is useful when you only want to compare part of the strings rather
	than the entire string.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
*/

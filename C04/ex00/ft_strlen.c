#include <stdio.h>
#include <stdlib.h>

/*

	The strlen function in C is used to calculate the length of a string, meaning it
	counts how many characters exist in a string until it encounters the null character
	'\0', which marks the end of the string. The function does not count the null
	character itself. the value returned by strlen is the number of characters in the
	string, excluding the null terminator.

	For example, if you have the string "hello", the length would be 5, as there are 5
	letters, and the null character that marks the end of the string is not included in
	the count.

	This is very helpful when manipulating strings, because you need to know the
	string's length to avoid accessing memory locations that do not belong to it.

*/

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_strlen(argv[1]));
	return (0);
}
 */

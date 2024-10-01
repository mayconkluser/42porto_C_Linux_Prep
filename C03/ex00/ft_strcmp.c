#include <stdio.h>

/*
	The strcmp function compares two strings to see if they are the same or
	diffrerent. It does this by cheking each character from both strings in order:

	-	If both strings are exactly the same, strcmp return 0.
	-	If the first string is "less" than the second one (meaning the first string has a
		character with a lower ASCII value at the point where they differ), it returns a
		negative number.
	-	If the first string is "greater" than the second (meaning the first string has a
		character with a higher ASCII value at the point where they differ), it returns a
		positive number.
	
	This function is commonly used to chech if two strings are equal or to determine
	their relative order for sorting.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
}
 */

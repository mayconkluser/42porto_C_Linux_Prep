#include <stdio.h>

/*

	The strstr funticon searches for the first occurrence of a substring within a
	larger string.

	-	It looks through the main string to find the first place where the substring
		appears.
	-	If it finds the substring, strstr retunrs a pointer to the beginning of the first
		occurence of that substring in the main string.
	-	If the substring is not found, it returns NULL.

	This function is useful when you need to check if a specific sequence of characters
	exists within onnother string.

 */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;
	int	size;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		j = 0;
		i++;
	}
	return NULL;
}

/*
int	main(int argc, char **argv)
{
	char	*result;
	if (argc != 3)
		printf("Usage: %s <str> <to_find>\n", argv[0]);
	result = ft_strstr(argv[1], argv[2]);
	if (result != NULL)
		printf("Substring found: %s\n", result);
	else
	printf("Substring not found.\n");
	return (0);
}
 */

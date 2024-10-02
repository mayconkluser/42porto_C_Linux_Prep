#include <stdio.h>

/*

	The atoi function in C converts a string into an integer. It reads the string
	character by character, skipping leading spaces and handling optional + ou -
	signs. It processes digits into on integer until it encounters a non-numeric
	character, at which poit it stops and returns the constructed integer. atoi is
	useful for extracting number from string but does not handle invalid input wel.

	How it works:
	-	Skipping whitespace: It moves past spaces and control characters.
	-	Handling signs: It counts '-' signs to determine if the number should be negative.
	-	Building the number: It convertes the numeric characters to an integer by
		processing each digit.
	-	Returning the result: If the number of '-' signs is odd, it returns the negative
		of the number; otherwise, it returns the possitive value.

*/

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sign;
	
	i = 0;
	while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
		i++;
	sign = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign++;
		i++;
	}
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (!(sign % 2))
		return (num);
	return (-num);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d",ft_atoi(argv[1]));
	return (0);
}
*/

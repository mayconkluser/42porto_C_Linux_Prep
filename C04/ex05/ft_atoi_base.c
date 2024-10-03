#include <stdio.h>

/*

	This code implements a function called ft_atoi_base, which converts a string
	representing a number in a given base (such as binary, hexadecimal, etc.) into an
	integer.

	-	is_valid_base
		Checks if the bas string is valid by ensuring it doesn't contain invalid characters
		like '+' or '-', space, ou duplicates. Returns 0 if invalid, 1 if valid.

	-	get_index
		Finds the index of a character in the base string. Returns the index if found, or -1 if
		the character is not part of the base.

	-	skip_whitespace
		Skips over spaces and invisible characters in the input string, returning the index of
		the first non-whitespace character.

	-	handle_sign
		Processes the sign ('+' or '-') at the start of the input string, adjusting the sign
		variable accordingly, and returns the updated position in the string.

	-	ft_atoi_base
		Main function that:
			- Validates the base using is_valid_base.
			- Initializes variables and determines the length of the base.
			- Skips whitespace and handles the sign.
			- Converts the input string to an integer usng the base.
			- Returns the final number, considering the sign.
	
	-	main
		Commented out, but it's for testing the function by taking user input (string and
		base) and printing the converted number.		

*/

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if(base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	skip_whitespace(char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	handle_sign(char *str, int *sign, int i)
{
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	num;
	int	sign;
	int	base_len;

	if (!is_valid_base(base))
		return (0);
	i = 0;
	num = 0;
	sign = 1;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	i = skip_whitespace(str, i);
	i = handle_sign(str, &sign, i);
	while (str[i] != '\0' && get_index(str[i], base) != -1)
	{
		num = num * base_len + get_index(str[i], base);
		i++;
	}
	return (num * sign);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
 */

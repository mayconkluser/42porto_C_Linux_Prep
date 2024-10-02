#include <unistd.h>

/*

	The putstr function in C, while not a standard library function, is typically used to
	print a string of characters to the standard output (usually the terminal). it
	processes the string character by character and sends each one to the screen until
	it encounters the null character '\0', which marks the end of the string.

	The purpose of this function is to display the textual content of the string without
	any additional formatting. It continues printing characters in sequence until it
	reaches the null terminator, which signals the end of the output.

	In summary, this function is useful for displaying a complete string at once,
	excluding the null character that indicates the end of the string.

*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putstr(argv[1]);
	return (0);
}
*/

#include <unistd.h>

char	*putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		putstr("You can only execute the program with the name 'compiled'.");
	else
		putstr(argv[0]);
	return (0);
}

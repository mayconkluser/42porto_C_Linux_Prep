#include <unistd.h>

char	*putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc == 1)
		putstr("This function requires additinal arguments.");
	else
	{
		i = 0;
		while (++i < argc)
		{
			putstr(argv[i]);
			putstr("\n");
		}
	}
	return (0);
}

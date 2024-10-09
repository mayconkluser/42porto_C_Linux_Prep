#include <unistd.h>

char	*putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc < 1)
		putstr("This function requires additional arguments.");
	else
	{
		while (argc > 1)
		{
			putstr(argv[argc - 1]);
			putstr("\n");
			argc--;
		}
	}
	return (0);
}

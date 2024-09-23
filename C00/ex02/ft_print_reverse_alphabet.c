#include <unistd.h>
void ft_print_reverse_aphabet(void)
{
	char letter;

	letter = 122;
	while (letter > 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}

/*
int	main(int argc, char **argv)
{
//	if (argc > 1)
//		ft_print_reverse_aphabet(argv[1]);
	ft_print_reverse_aphabet();
	return (0);
}
*/

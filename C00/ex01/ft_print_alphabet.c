#include <unistd.h>
void ft_print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter < 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

/*
int	main(int argc, char **argv)
{
//	if (argc > 1)
//		ft_print_alphabet(argv[1]);
	ft_print_alphabet();
	return (0);
}
*/

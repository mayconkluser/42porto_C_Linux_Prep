#include <unistd.h>
void	ft_print_number(void)
{
	int number;

	number = 48;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}

int	main(int argc, char **argv)
{
//	if (argc > 1)
//		printf(ft_print_number(atoi(argv[1])));
	ft_print_number();
	return (0);
}

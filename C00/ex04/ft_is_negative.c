#include <unistd.h>
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_is_negative(atoi(argv[1]));
	return (0);
}
*/

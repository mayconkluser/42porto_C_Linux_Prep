#include <unistd.h>
void ft_putnbr(int nb)
{
	long nbl;
	char	convert;
	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl*= -1;
	}
	if (nbl >= 10)
	{
		ft_putnbr(nbl / 10);
	}
	convert = (nbl % 10) + 48;
	write(1, &convert, 1);
}

/*
#include <stdlib.h> // atoi()
int	main(int argc, char **argv)
{
//	if (argc > 0)
//		ft_putnbr(atoi(argv[1]));
	ft_putnbr(42);
	return (0);
}
*/

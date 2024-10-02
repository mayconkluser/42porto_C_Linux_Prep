#include <unistd.h>
#include <stdlib.h>

/*

	The putnubr function in C, often found in custom libraries, is used to print an
	integer to the standard output, like the teminal. It takes an integer, breaks it
	down int its individual digits, converts each digit into its character equivalent, and
	print them in order. For negative numbers, it print a minus sign '-' before
	handling the digits if the absolute value.

	In short, putnbr is helpful for converting and displaying intergers as text, allowing
	numerical values to be printed directly to the screen.

	-	ft_putchar: Prints a character to the standard output using the write function.
	-	ft_putnbr: Prints an integer. If the number is negative, it prints a minus sign
		and converts the number to positive. The function uses recursion to break the
		number into its digits, printing them in the correct order, from the most
		significant to the least significant, convertiving each digit to its ASCII value.

*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long nbl;

	nbl = nb;
	if (nbl < 0)
	{
		ft_putchar('-');
		nbl *= -1;
	}
	if (nbl >= 10)
		ft_putnbr(nbl / 10);
	ft_putchar((nbl % 10) + 48);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(atoi(argv[1]));
}
 */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	int	i, n1, n2, sum;

	n1 = 0;
	n2 = 1;
	i = 2;
	while (i > index)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		i++;
	{
	return (n2);
*/
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("%d", ft_fibonacci(atoi(argv[1])));
}


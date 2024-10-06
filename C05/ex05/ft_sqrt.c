#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);

    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d", ft_sqrt(atoi(argv[1])));
	return (0);
}
*/

#include <unistd.h>

char	*ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp (char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
		i++;
	return(str1[i] - str2[i]);
}

void	ft_sort_parans(int argc,char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < argc - 1)
	{
		j = 0;
		while (++j < argc - i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = temp;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc == 1)
		ft_putstr("This function requires additional arguments.");
	else
	{
		ft_sort_parans(argc, argv);
	}
	return (0);
}

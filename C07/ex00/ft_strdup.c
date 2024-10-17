#include <stdlib.h>
#include <unistd.h>

/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
*/

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	j = 0;
	while (j < i)
	{
		dup[j] = src[j];
		j++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(int argc, char **argv)
{
	if (argc < 1)
	{
		ft_putstr("This function requires additional arguments.");
	}
	else
	{
		char	*dup_str = ft_strdup(argv[1]);
		if	(dup_str)
		{
			ft_putstr(dup_str);
			free(dup_str);
		}
	}
	return (0);
}
*/

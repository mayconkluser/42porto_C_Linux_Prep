#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] !='\0')
		len++;
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int total;
	int i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (ft_strlen(sep) * (size -1));
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_len;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = total_length(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i< size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

/*
int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Use: %s <separator> <string1> <string2> <stringN>\n", argv[0]);
		return (1);
	}
	char *sep = argv[1];
	char *result = ft_strjoin(argc -2, argv + 2, sep);
	if (result)
	{
		printf("Result %s\n", result);
		free(result);
	}
	else
	{
		printf("Error allocating memory\n");
	}
	return (0);
}
 */

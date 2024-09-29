#include <stdio.h> 

int ft_is_alphanumeric(char *str, int i)
{
	return ((str[i] >= '0' && str[i] <= '9') 
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'));
}

char *ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str, i))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/*
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}
*/

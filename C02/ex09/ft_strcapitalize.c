#include <stdio.h> 

char *ft_strcapitalize(char *str)
{
	int i;
	int new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') 
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= 32;
				new_word = 0;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
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

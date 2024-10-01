#include <stdio.h>

/*

	The strlcat funtion is used to concatenate two strings, but with an important
	difference compared to other concatenation functions like strcat: it ensures
	that the resulting string is always null-terminated '\0' and that it doesn'1 exceed
	the maximum buffer size provided.

	-	The function takes three main parameters: the destination string (where the
		source string will be appended), the source string (which will be
		concatenated), and the total size of the destination buffer (including space for
		the null terminator).
	-	strlcat appends the source string to the end of the destination string, but
		only up to the limit of the buffer size. This prevents the buffer from being
		overrun, avoiding memory overflow issues.
	-	The function returns the total length that the concatenated string would have
		if there were no size limit. This is useful to detect if truncation occurred.

	This function is designed to be safer because it prevents buffer overflows, which
	can happen with function like strcat if the size of the buffer is not carfully
	managed.

	Key points
	-	Ensures the resulting string is always null-terminated '\0'.
	-	Does not exceed the buffer limit (in this function, there is no have buffer limit,
		but you can use malloc), avoiding memory overflow.
	-	Returns the total length the concatenated string would have, allowing the
		programmer to detect truncation.

*/

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	src_len = 0;
	dest_len = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	dest_len = i;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0 || dest_len >= size)
		return (size + src_len);
	j = -1;
	while (src[++j] != '\0' && dest_len + j < size - 1)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest_len + src_len);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("Usage: %s <dest> <src>\n", argv[0]);
	else
	{
		int	size_dest;
		int	size_src;
		int size;
		
		size_dest = 0;
		while (argv[1][size_dest] != '\0')
			size_dest++;
		size_src = 0;
		while (argv[2][size_src] != '\0')
			size_src++;
		size = size_dest + size_src + 1;
		printf("Total length: %d\n", ft_strlcat(argv[1], argv[2], size));
		printf("Concatenated string: %s\n", argv[1]);
		return (0);
	}
}
*/

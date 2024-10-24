
# Exercise 03 : ft_strjoin

This README provides an explanation of the `ft_strjoin` function in C, which concatenates an array of strings with a specified separator between them.

## Function Overview

1. **String Concatenator - ft_strjoin(int size, char **strs, char *sep)**
   - The `ft_strjoin` function joins multiple strings from an array `strs` and inserts the separator `sep` between each string. 
   - It dynamically allocates memory for the result and returns the concatenated string.

## Function Prototype

```c
char *ft_strjoin(int size, char **strs, char *sep);
```

### Parameters
- **size**: The number of strings in the array `strs`.
- **strs**: An array of strings to be concatenated.
- **sep**: The separator string to be inserted between each string in `strs`.

### Return Values
- The `ft_strjoin` function returns a pointer to the newly allocated string containing the concatenated result.
- If `size` is zero or if memory allocation fails, the function returns `NULL`.

## Code Explanation

### String Concatenator - ft_strjoin
   - The function checks if `size` is zero. If it is, it returns an empty string.
   - It calculates the total length required to store the concatenated string by summing the lengths of all strings in `strs` and the separators.
   - Memory is dynamically allocated for the result, and if the allocation fails, `NULL` is returned.
   - The function then concatenates each string in `strs` into the result, inserting `sep` between each string.
   - The result is returned with the allocated memory.

### Supporting Functions
- **ft_strcat**: Concatenates the `src` string to the end of `dest`.
- **ft_strlen**: Calculates the length of a given string.
- **total_length**: Calculates the total length of the concatenated string, including the separators.

## Memory Management

It is important to note that the caller is responsible for freeing the memory allocated by `ft_strjoin` when it is no longer needed.

## Example Code

```c
#include <stdlib.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int total_length(int size, char **strs, char *sep)
{
    int total = 0;
    for (int i = 0; i < size; i++)
        total += ft_strlen(strs[i]);
    total += (ft_strlen(sep) * (size - 1));
    return total;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
        return (char *)malloc(1);

    int total_len = total_length(size, strs, sep);
    char *result = (char *)malloc((total_len + 1) * sizeof(char));
    if (!result)
        return NULL;

    result[0] = '\0';
    for (int i = 0; i < size; i++)
    {
        ft_strcat(result, strs[i]);
        if (i < size - 1)
            ft_strcat(result, sep);
    }
    return result;
}

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("Usage: %s <separator> <string1> <string2> <stringN>\n", argv[0]);
        return 1;
    }

    char *sep = argv[1];
    char *result = ft_strjoin(argc - 2, argv + 2, sep);
    
    if (result)
    {
        printf("Result: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error allocating memory\n");
    }

    return 0;
}
```

## Conclusion

The `ft_strjoin` function is a useful utility in C for concatenating strings with a separator. It handles dynamic memory allocation and string manipulation efficiently. Proper memory management is essential, and the allocated memory must be freed after use.

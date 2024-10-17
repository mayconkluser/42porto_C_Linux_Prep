
# Exercise 00 : ft_strdup

This README provides an explanation of the `ft_strdup` function in C, which duplicates a string by dynamically allocating memory and copying the contents of the original string.

## Function Overview

1. **String Duplicator - ft_strdup(char *src)**
   - The `ft_strdup` function takes a source string (`src`) as an argument, allocates memory to hold a copy of this string, and then copies the content of `src` into the newly allocated memory.

## Function Prototype

```c
char *ft_strdup(char *src);
```

### Parameters
- **src**: A pointer to the source string that will be duplicated.

### Return Values
- The `ft_strdup` function returns a pointer to the newly allocated and duplicated string.
- If memory allocation fails, it returns `NULL`.

## Code Explanation

### String Duplicator - ft_strdup
   - The function first calculates the length of the source string (`src`) by iterating through each character until it reaches the null terminator (`\0`).
   - It then allocates enough memory to store a duplicate of the string, including space for the null terminator.
   - If `malloc` fails and returns `NULL`, the function exits early with `NULL`.
   - After allocating memory, the function copies each character from `src` to the new memory block (`dup`), and finally adds a null terminator.

## Memory Management

It’s important to note that the caller is responsible for freeing the memory allocated by `ft_strdup` when it is no longer needed.

## Example Code

```c
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    int j;
    char *dup;
    
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

int main()
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);
    
    if (copy != NULL)
    {
        // Use the duplicated string `copy`
        free(copy); // Remember to free the allocated memory
    }
    
    return 0;
}
```

## Conclusion

The `ft_strdup` function provides a simple way to duplicate a string in C by allocating memory dynamically. It is a valuable utility in cases where string duplication is necessary, especially when working with dynamic memory management.

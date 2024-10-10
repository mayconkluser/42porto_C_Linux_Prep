
# Sort Parans

This README provides an explanation of three string manipulation functions in C (`ft_putstr`, `ft_strcmp`, and `ft_sort_parans`) and their usage in sorting command-line arguments.

## Function Overview

1. **String Printer - ft_putstr(char *str)**
   - The `ft_putstr` function takes a string and writes each character to the standard output (stdout) one by one using the `write` system call. It appends a newline at the end of the string.

2. **String Comparator - ft_strcmp(char *str1, char *str2)**
   - The `ft_strcmp` function compares two strings character by character and returns the difference between the ASCII values of the first differing characters.

3. **Argument Sorter - ft_sort_parans(int argc, char **argv)**
   - The `ft_sort_parans` function sorts command-line arguments in ascending lexicographical order using the `ft_strcmp` function to determine the order.

## Function Prototypes

```c
char *ft_putstr(char *str);
int ft_strcmp(char *str1, char *str2);
void ft_sort_parans(int argc, char **argv);
int main(int argc, char **argv);
```

### Parameters
- **str**: A pointer to the character string to be printed.
- **str1, str2**: Pointers to the character strings to be compared.
- **argc**: The count of command-line arguments passed to `main`.
- **argv**: An array of strings representing each command-line argument.

### Return Values
- `ft_putstr` returns a pointer to the input string after printing.
- `ft_strcmp` returns the difference between the ASCII values of the first differing characters in `str1` and `str2`.
- `ft_sort_parans` does not return a value; it modifies `argv` in-place to sort the arguments.

## Code Explanation

1. **String Printer - ft_putstr**
   - This function iterates through each character of the input string `str`, printing each one individually.
   - A newline is printed after the string.

2. **String Comparator - ft_strcmp**
   - The `ft_strcmp` function compares `str1` and `str2` character by character.
   - If characters differ, it returns the ASCII difference between them; otherwise, it returns `0` if strings match.

3. **Argument Sorter - ft_sort_parans**
   - This function sorts command-line arguments in ascending lexicographical order using a bubble sort algorithm.
   - It iterates over `argv`, comparing and swapping elements based on `ft_strcmp` results.
   - After sorting, each argument is printed in order by calling `ft_putstr`.

## Compilation and Execution

To compile and run the program:
1. **Compile**: `gcc -o compiled program.c`
2. **Run**: `./compiled [arguments]`  
   - Running without arguments displays a message that additional arguments are required.
   - Running with arguments sorts them lexicographically and outputs each one on a new line.

## Full Code

```c
#include <unistd.h>

char *ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0')
        i++;
    return (str1[i] - str2[i]);
}

void ft_sort_parans(int argc, char **argv)
{
    int i;
    int j;
    char *temp;

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

int main(int argc, char **argv)
{
    if (argc == 1)
        ft_putstr("This function requires additional arguments.");
    else
    {
        ft_sort_parans(argc, argv);
    }
    return (0);
}
```

## Conclusion

These functions demonstrate various string manipulation techniques in C, such as outputting, comparing, and sorting strings using `write` from `<unistd.h>`. The `ft_sort_parans` function leverages these utilities to lexicographically sort command-line arguments, showcasing a practical use case of string manipulation functions in C.

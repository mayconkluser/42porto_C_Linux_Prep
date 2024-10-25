
# Exercise 04 : ft_convert_base

This README provides a detailed explanation of the `ft_convert_base` program in C, which converts a number from one base to another. The main function, `ft_convert_base`, works in conjunction with helper functions to validate bases, convert numbers to decimal, and format the result in the target base.

## Overview of Main Functions

1. **Base Converter - ft_convert_base(char *nbr, char *base_from, char *base_to)**
   - This function converts a string representing a number (`nbr`) in one base (`base_from`) to another base (`base_to`). 
   - It first validates both bases, then converts the number to a decimal integer, and finally formats it in the target base.

## Function Prototypes

```c
int is_valid_base(char *base);
int ft_atoi_base(char *str, char *base);
char *ft_itoa_base(int nbr, char *base);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
```

## Code and Explanations

```c
#include <stdlib.h>
#include <stdio.h>

// Function Declarations
int is_valid_base(char *base);
int ft_atoi_base(char *str, char *base);
char *ft_itoa_base(int nbr, char *base);

// Converts `nbr` from `base_from` to `base_to`.
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if (!is_valid_base(base_from) || !is_valid_base(base_to))
        return (NULL);
    int decimal_value = ft_atoi_base(nbr, base_from);
    return (ft_itoa_base(decimal_value, base_to));
}
```

### Explanation of `ft_convert_base`
1. **Base Validation**: The function first checks if `base_from` and `base_to` are valid using `is_valid_base`. If either base is invalid, it returns `NULL`.
2. **Conversion to Decimal**: Calls `ft_atoi_base` to convert `nbr` to a decimal integer based on `base_from`.
3. **Formatting in Target Base**: Calls `ft_itoa_base` to convert the decimal value to the target base, returning the resulting string.

### Supporting Functions

```c
// Checks if the base string is valid.
int is_valid_base(char *base)
{
    int i, j;
    i = 0;
    while (base[i])
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
            return (0); // Base should not contain '+', '-', or spaces
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0); // Base should not contain duplicate characters
            j++;
        }
        i++;
    }
    return (1); // Valid base
}

// Converts character `c` in `base` to its integer index.
int get_base_value(char c, char *base)
{
    int i = 0;
    while (base[i])
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1); // Returns -1 if `c` is not in `base`
}

// Converts string `str` in a given `base` to a decimal integer.
int ft_atoi_base(char *str, char *base)
{
    int base_len = 0, sign = 1, result = 0, val;

    while (base[base_len])
        base_len++;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }
    while ((val = get_base_value(*str, base)) != -1)
    {
        result = result * base_len + val;
        str++;
    }
    return (result * sign);
}
```

### Explanation of Supporting Functions
1. **is_valid_base**: Verifies the base string is valid, with no duplicates, no spaces, and no `+` or `-` signs.
2. **get_base_value**: Returns the index of character `c` in `base`, or `-1` if `c` is not found.
3. **ft_atoi_base**: Converts a string in the given base to a decimal integer, handling spaces and signs.

```c
// Converts an integer `nbr` to a string in the specified `base`.
char *ft_itoa_base(int nbr, char *base)
{
    int base_len = 0, nbr_len = 1, tmp = nbr, is_negative = 0;
    char *result;

    while (base[base_len])
        base_len++;
    if (nbr < 0)
    {
        is_negative = 1;
        nbr_len++;
        nbr = -nbr;
    }
    while (tmp /= base_len)
        nbr_len++;
    result = (char *)malloc(sizeof(char) * (nbr_len + 1));
    if (!result)
        return (NULL);
    result[nbr_len] = '\0';
    while (nbr_len > 0)
    {
        nbr_len--;
        result[nbr_len] = base[nbr % base_len];
        nbr /= base_len;
    }
    if (is_negative)
        result[0] = '-';
    return (result);
}
```

### Explanation of `ft_itoa_base`
1. **Calculates Base Length**: Counts the length of `base`.
2. **Handles Negativity**: If `nbr` is negative, `is_negative` is set, and the negative sign will be prefixed.
3. **Calculates Length of Result**: Uses a loop to determine the length required for the result.
4. **Memory Allocation**: Allocates memory for the result string and converts `nbr` to the specified base.
5. **Adds Negative Sign**: Adds `-` at the start if `is_negative` is true.

## Example Main Function

```c
int main(int argc, char **argv)
{
    if (argc != 4)
    {
        printf("Use: %s <number> <base_from> <base_to>\n", argv[0]);
        return (1);
    }
    char *nbr = argv[1];
    char *base_from = argv[2];
    char *base_to = argv[3];
    char *result = ft_convert_base(nbr, base_from, base_to);

    if (result == NULL)
        printf("Error: Invalid base.\n");
    else
    {
        printf("Conversion result: %s\n", result);
        free(result);
    }
    return (0);
}
```

### Explanation of Main Function
1. **Command-Line Arguments**: Expects 3 arguments - a number, the base it’s currently in, and the target base.
2. **Error Checking**: If arguments are missing, prints usage information.
3. **Conversion**: Calls `ft_convert_base` with `nbr`, `base_from`, and `base_to`.
4. **Result**: If conversion is successful, prints the result. Otherwise, displays an error message for invalid bases.
5. **Memory Management**: Frees the allocated memory to prevent leaks.

## Conclusion

The `ft_convert_base` program provides a robust solution for base conversion in C, incorporating base validation, base-specific parsing, and formatting in a target base. Memory management is handled efficiently, and error handling ensures only valid bases and inputs are processed.

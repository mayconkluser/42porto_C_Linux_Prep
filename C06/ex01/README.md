
# Exercise 01 : ft_print_params

This README provides an explanation of the `putstr` function and its application within a C program that outputs each argument on a new line if additional arguments are provided.

## Function Overview

1. **String Printer - putstr(char *str)**
   - The `putstr` function takes a string and writes each character to the standard output (stdout) one by one using the `write` system call.

2. **Argument Printer - main(int argc, char **argv)**
   - The `main` function checks the number of arguments passed to the program. If arguments are provided, it outputs each on a new line; if no additional arguments are given, it outputs an instructional message.

## Function Prototypes

```c
char *putstr(char *str);
int main(int argc, char **argv);
```

### Parameters
- **str**: A pointer to the character string that will be output to the console.

### Return Values
- The `putstr` function returns a pointer to the input string after printing.

## Code Explanation

1. **String Printer - putstr**
   - This function iterates through each character of the input string `str`.
   - `write(1, str++, 1);` is used to print each character individually, where `1` denotes stdout, and `str++` advances to the next character.

2. **Argument Printer - main**
   - The main function begins by checking the value of `argc`.
   - If only the program name is provided (`argc == 1`), it uses `putstr` to display a message indicating that additional arguments are required.
   - If additional arguments are present, it iterates through each argument (from `argv[1]` onward) and prints each on a new line by calling `putstr(argv[i]);` followed by `putstr("\n");`.

## Compilation and Execution

To compile and run the program:
1. **Compile**: `gcc -o compiled program.c`
2. **Run**: `./compiled [arguments]`  
   - Running without arguments shows the instructional message.
   - Running with arguments displays each argument on a new line.

## Full Code

```c
#include <unistd.h>

char *putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    int i;
    if (argc == 1)
        putstr("This function requires additional arguments.");
    else
    {
        i = 0;
        while (++i < argc)
        {
            putstr(argv[i]);
            putstr("\n");
        }
    }
    return (0);
}
```

## Conclusion

The `putstr` function is a simple example of low-level character output in C using `write` from `<unistd.h>`. This example highlights how the function can be used to handle argument-based conditions and output each argument on a new line.

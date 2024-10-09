
# putstr Function Example in C

This README provides an explanation for the `putstr` function and its role within a simple C program that checks argument count and prints messages accordingly.

## Function Overview

1. **String Printer - putstr(char *str)**
   - The `putstr` function takes a string and writes each character to the standard output (stdout) one by one using the `write` system call.

2. **Argument Checker and Printer - main(int argc, char **argv)**
   - The `main` function checks if the program was executed with a name-only argument and provides feedback. If extra arguments are passed, it displays an informative message.

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
   - The `write(1, str++, 1);` call is used to print each character, where `1` denotes stdout and `str++` advances to the next character.
   - The function stops once it reaches the end of the string.

2. **Argument Checker - main**
   - The main function begins by checking if more than one argument was passed (i.e., `argc > 1`).
   - If true, it uses `putstr` to output a message instructing users to execute the program with a single name argument.
   - If executed with the correct number of arguments (i.e., only the program name), it outputs the program name stored in `argv[0]`.

## Compilation and Execution

To compile and run the program:
1. **Compile**: `gcc -o compiled program.c`
2. **Run**: `./compiled` (running without arguments follows the intended use case). Executing with additional arguments displays the instructional message.

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
    if (argc > 1)
        putstr("You can only execute the program with the name 'compiled'.");
    else
        putstr(argv[0]);
    return (0);
}
```

## Conclusion

The `putstr` function demonstrates a basic method of outputting characters in C using `write` from `<unistd.h>`. This example shows how argument-based conditions can influence output within the `main` function, providing a framework for understanding basic I/O operations in C.


# ft_putchar Function in C

This README provides an explanation of the `ft_putchar` function in C, which is designed to output a single character to the standard output using the `write` system call.

## Function Overview

1. **Character Printer - ft_putchar(char c)**
   - The `ft_putchar` function takes a single character as an argument and writes it directly to the standard output (stdout) using the `write` system call from `<unistd.h>`.

## Function Prototype

```c
void ft_putchar(char c);
```

### Parameters
- **c**: A character to be printed to the console.

### Return Values
- The `ft_putchar` function does not return any value.

## Code Explanation

### Character Printer - ft_putchar
   - The function accepts a character `c` as its parameter.
   - It utilizes `write(1, &c, 1);` to output the character, where:
     - `1` specifies the file descriptor for stdout.
     - `&c` provides the address of `c`, ensuring that the correct character is written.
     - The final `1` indicates that only one byte (the size of a character) is written.

## Compilation and Usage

To compile and use the function:
1. **Compile**: Include `ft_putchar` within a larger program or as a standalone function in a C file.
2. **Usage**: Call `ft_putchar('A');` to output the character `A`.

## Example Code

```c
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar('A');  // This will output the character 'A' to the console
    return 0;
}
```

## Conclusion

The `ft_putchar` function demonstrates a simple, low-level method of outputting a single character in C, using the `write` function from `<unistd.h>`. This can be useful for scenarios where minimal overhead is required, such as in embedded systems or low-level applications.

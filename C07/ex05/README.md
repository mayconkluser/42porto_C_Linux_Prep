
# Execise 05 : ft_split

This README provides a detailed explanation of the `ft_split` function in C, which divides a string into substrings based on a specified set of delimiter characters (referred to as `charset`). The program also includes supporting functions to identify delimiters, count words, and create substrings.

## Overview of Main Functions

1. **String Splitter - ft_split(char *str, char *charset)**
   - The `ft_split` function takes a string (`str`) and a set of delimiter characters (`charset`).
   - It splits the string into individual words separated by any of the delimiters in `charset`, allocating memory dynamically for each substring.

## Function Prototypes

```c
int is_delimiter(char c, char *charset);
int count_words(char *str, char *charset);
char *copy_word(char *start, int len);
char **ft_split(char *str, char *charset);
```

## Code and Explanations

```c
#include <stdlib.h>
#include <stdio.h>

// Checks if character `c` is in the set of delimiters `charset`
int is_delimiter(char c, char *charset) {
    while (*charset) {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}
```

### Explanation of `is_delimiter`
1. **Delimiter Search**: The function iterates over each character in `charset`.
2. **Return Value**: Returns `1` if `c` is found in `charset`; otherwise, it returns `0`, indicating that `c` is not a delimiter.

```c
// Counts the number of words separated by delimiters in `str`
int count_words(char *str, char *charset) {
    int count = 0;
    while (*str) {
        // Skip any initial delimiters
        while (*str && is_delimiter(*str, charset))
            str++;
        if (*str) {
            count++;
            // Move through the word until the next delimiter
            while (*str && !is_delimiter(*str, charset))
                str++;
        }
    }
    return count;
}
```

### Explanation of `count_words`
1. **Counting Words**: Skips any delimiters, counts each sequence of non-delimiters as one word, and continues through the string.
2. **Return Value**: Returns the total count of words separated by delimiters.

```c
// Copies a word starting from `start` with a length of `len` into a new string
char *copy_word(char *start, int len) {
    int i = 0;
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    while (i < len) {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0'; // Null-terminate the copied string
    return word;
}
```

### Explanation of `copy_word`
1. **Memory Allocation**: Allocates memory for a string of length `len` + 1.
2. **Copying Characters**: Copies each character from the original word to the new string.
3. **Return Value**: Returns the allocated and populated word string.

```c
// Splits the `str` into words based on the delimiters in `charset`
char **ft_split(char *str, char *charset) {
    int i = 0, word_len;
    char **result = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
    if (!result)
        return NULL;
    while (*str) {
        // Skip any initial delimiters
        while (*str && is_delimiter(*str, charset))
            str++;
        if (*str) {
            word_len = 0;
            // Determine the length of the current word
            while (str[word_len] && !is_delimiter(str[word_len], charset))
                word_len++;
            result[i] = copy_word(str, word_len); // Copy the word to result
            i++;
            str += word_len; // Move to the next part of the string
        }
    }
    result[i] = NULL; // Null-terminate the array of strings
    return result;
}
```

### Explanation of `ft_split`
1. **Memory Allocation**: Allocates memory for an array of strings based on the number of words counted.
2. **Splitting the String**: Loops through `str`, identifying and copying each word into `result`.
3. **Return Value**: Returns a pointer to the array of split words, with the last element being `NULL`.

## Example Main Function

```c
int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Use: %s <string> <charset>\n", argv[0]);
        return 1;
    }

    char **result = ft_split(argv[1], argv[2]);
    int i = 0;

    printf("Result of division of \"%s\" with delimiter \"%s\":\n", argv[1], argv[2]);
    while (result[i]) {
        printf("Substring %d: %s\n", i + 1, result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return 0;
}
```

### Explanation of Main Function
1. **Command-Line Arguments**: Expects a string and a set of delimiters as arguments.
2. **Calling `ft_split`**: Calls the `ft_split` function, passing the string and delimiters.
3. **Displaying Results**: Prints each substring resulting from the split.
4. **Memory Management**: Frees each allocated word in `result` as well as the array itself to avoid memory leaks.

## Conclusion

The `ft_split` program demonstrates how to split a string into words based on multiple delimiters. The helper functions handle memory allocation and validation, making the split process efficient and manageable. Proper memory management is crucial to prevent leaks, especially with dynamically allocated arrays of strings.

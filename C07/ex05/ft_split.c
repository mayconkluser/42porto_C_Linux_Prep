#include <stdlib.h>
#include <stdio.h>

int is_delimiter(char c, char *charset) {
    while (*charset) {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

int count_words(char *str, char *charset) {
    int count = 0;
    while (*str) {
        while (*str && is_delimiter(*str, charset))
            str++;
        if (*str) {
            count++;
            while (*str && !is_delimiter(*str, charset))
                str++;
        }
    }
    return count;
}

char *copy_word(char *start, int len) {
    int i = 0;
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    while (i < len) {
        word[i] = start[i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char *str, char *charset) {
    int i = 0;
    int word_len;
    char **result = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
    if (!result)
        return NULL;
    while (*str) {
        while (*str && is_delimiter(*str, charset))
            str++;
        if (*str) {
            word_len = 0;
            while (str[word_len] && !is_delimiter(str[word_len], charset))
                word_len++;
            result[i] = copy_word(str, word_len);
            i++;
            str += word_len;
        }
    }
    result[i] = NULL;
    return result;
}
/*
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

 */

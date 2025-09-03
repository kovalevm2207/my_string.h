#include "my_string.h"

int my_puts(const char* string)
{
    int i = 0;

    while (string[i] != '\0') {
        if (putchar(string[i++]) == EOF) {
            return EOF;
        }
    }

    return --i;
}

char* my_strchr(const char* string, int c)
{
    int i = -1;

    while(string[++i] != '\0') {
        if (string[i] == c) {
            return (char *) string + i;
        }
    }

    return NULL;
}

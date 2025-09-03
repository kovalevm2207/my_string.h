#include <stdio.h>
#include "my_string.h"

int main()
{     // corova
    char string[7] = {0};
    for (unsigned int i = 0; i < 7; i++) {

        string[i] = getchar();
        // printf("%c", string[i]);

    }

    char* b = my_strchr(string, 't');
    printf("%s", b);
    printf("\n");

    int a = my_puts(string);

    printf("%d\n", a);

    return 0;

}

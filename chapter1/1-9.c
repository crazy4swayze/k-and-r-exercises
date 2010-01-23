#include <stdio.h>

int main(void) {
    int c, in;
    in = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            in = 1;
        else {
            if (in == 1)
                putchar(' ');
            in = 0;
            putchar(c);
        }
    }

    return 0;
}

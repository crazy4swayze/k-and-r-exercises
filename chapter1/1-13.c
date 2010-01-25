#include <stdio.h>

#define LIMIT 101

int main(void) {
    int c, len, i, j;
    int nlens[LIMIT];

    for (i = 0; i < LIMIT; ++i)
        nlens[i] = 0;

    len = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t' ) {
            ++nlens[len];
            len = 0;
        }
        else 
            ++len;
    }

    for (i = 1; i < LIMIT; ++i) {
        printf("%3d ", i);
        for (j = 0; j < nlens[i]; ++j)
            printf("-");
        printf("\n");
    }
    return 0;
}

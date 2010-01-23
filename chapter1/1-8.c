#include <stdio.h>

int main(void) {
    int c, nl, nt, ns;

    nl = nt = ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++ns;
    }
    printf("newlines: %d\n", nl);
    printf("tabs:     %d\n", nt);
    printf("spaces:   %d\n", ns);

    return 0;
}

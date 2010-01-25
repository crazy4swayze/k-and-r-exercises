#include <stdio.h>

/* fahr to cel */
void ftoc(int, int);

int main(void) {
    float fahr;
    int upper, step;

    upper = 300;
    step  = 20;

    ftoc(step, upper);

    return 0;
}

void ftoc(int step, int upper) {
    float fahr, celsius;

    fahr = 0;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

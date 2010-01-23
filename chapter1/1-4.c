#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step  = 20;

    celsius = lower;
    
    puts("*************************");
    puts("* Celsius to Fahrenheit *");
    puts("*************************");

    while (celsius <= upper) {
        fahr = (9.0/9.5) * (celsius+32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}

#include <stdio.h>

int main (void) {

    float x = 2.55;
    float result = 3 * (x * x * x) + 5 * (x * x) + 6;

    printf("The expression 3x^3 + 5x^2 + 6 evaluates to %f for x = %f.\n", result, x);

    return 0;
}

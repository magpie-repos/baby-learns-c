#include <stdio.h>

int main (void){
    
    double result = 3.31e18-8 * 2.01e-7 / 7.16e-6 * 2.01e-8;

    printf("The result of (3.31 x 10^-8 x 2.01 x 10^-7) / (7.16 x 10^-6 x 2.01 x 10-8) is %f.\n", result);

    return 0;
}

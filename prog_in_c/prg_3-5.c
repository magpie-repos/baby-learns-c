/* This program is an example taken from the book Programming in C.
It intends to illustrate various conversions between floats and ints
*/

#include <stdio.h>

int main (void){
    float f1 = 123.125m f2;
    int i1, i2 = -99;
    char c = 'a';

    i1 = f1; //Float to int
    printf("%f assigned to an in produces %i\n", f1, i1);

    f1 = i2;
    printf("%f assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100;
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2 = i2 / 100.0;
    printf("%i divided by 100.0 produced %f\n", i2, f2);

    f2 = (float) i2 / 100;
    printf("(float) %i divided by 100 produces %f\n", i2, f2);

    return 0;
}

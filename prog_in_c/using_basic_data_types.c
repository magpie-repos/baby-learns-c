/* This program is an excerpt from the book Programming in C.
/  It creates several different variables of different data 
/  types and then prints them to the terminal.
*/

#include <stdio.h>

int main (void){
    int         integerVar = 100;
    float       floatingVar = 331.79;
    double      doubleVar = 6.65e-3;
    char        charVar = ')';

    _Bool       boolVar = 0;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    return 0;
}

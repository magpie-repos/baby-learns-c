/* This program adds two numbers of a set value and
 * prints the output to the terminal.               */

#include <stdio.h>

int main (void){
    int value1, value2, sum;
    //This is how you create a single-line comment
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    //This is how you insert multiple values into the format string using printf() 
    printf("The sum of %i and %i is %i.\n", value1, value2, sum);   

    return 0;
}

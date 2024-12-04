/* This program is the answer to an end of chapter exercise question from the
 * book: Programming in C. This program subtracts the number 15 from 87 and then
 * prints the result to the terminal along with an appropriate message.
 */
#include <stdio.h>

int main(void){
    int value1, value2, diff;
    value1 = 15;
    value2 = 87;

    diff = value2 - value1;

    printf("%i subtracted from %i results in %i.\n", value1, value2, diff);
    
    return 0;
} 

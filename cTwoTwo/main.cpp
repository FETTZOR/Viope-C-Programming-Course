#include <stdio.h>
/* This is a fine program */

int main(){
    int number;
    int square;
    printf("Enter an integer: ");
    scanf("%d", &number);
    square = number * number;
    printf("The square of the number you entered is  %d\n",square);
    return 0;
}
#include <stdio.h>
/* This is a fine program */

int main(){
    int number;
    double  decimal;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Enter a decimal number:");
    scanf("%lf", &decimal);
    printf("You entered the integer: %d\n",number);
    printf("You entered the decimal number, rounded to two decimal places: %.2f",decimal);
    return 0;
}
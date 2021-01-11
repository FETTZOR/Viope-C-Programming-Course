#include <stdio.h>
/* This is a fine program */

int main(){
    int first_number;
    int  second_number;
    int sum;
    int minus;
    int multiplication;
    printf("Enter the first number:");
    scanf("%d", &first_number);
    printf("Enter the second number:");
    scanf("%d", &second_number);
    sum = first_number + second_number;
    minus = first_number - second_number;
    multiplication = first_number * second_number;
    printf("%d + %d = %d\n", first_number, second_number, sum );
    printf("%d - %d = %d\n", first_number, second_number, minus );
    printf("%d * %d = %d", first_number, second_number, multiplication );

    return 0;
}
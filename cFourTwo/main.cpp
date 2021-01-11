#include <stdio.h>
/* This is a fine program */

int main(){
    int user_int_input;

    printf("Enter an integer: ");
    scanf("%d", &user_int_input);

    if (user_int_input % 2 == 0){
        printf("The number is 0");
    }
    else {
        printf("The number is 1");
    }

    return 0;
}
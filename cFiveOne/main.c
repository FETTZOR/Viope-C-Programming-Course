#include <stdio.h>
/* This is a fine program */

int main(){
    int user_int_input;

    printf("Enter an integer: ");
    scanf("%d", &user_int_input);

    if (user_int_input % 2 == 0){
        printf("Number %d is even.\n", user_int_input );
    }
    else {
        printf("Number %d is odd.\n", user_int_input );
    }

    return 0;
}

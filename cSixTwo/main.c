#include <stdio.h>

int main()
{
    int i;
    int user_input;
    int factorial_count = 1;

    printf("Enter an integer: \n");
    scanf("%d", &user_input);
    for (i = 1; i <= user_input; i++)
        factorial_count = factorial_count * i;

    printf("The factorial of %d is %d", user_input, factorial_count);

    return 0;
}
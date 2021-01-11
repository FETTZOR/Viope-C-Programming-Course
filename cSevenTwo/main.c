#include <stdio.h>

int sum();
int diff();
int product();

void main()
{
    int a;
    int b;
    int choice;
    do{

        printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);
        if(choice < 0) {
            printf("Terminating the program...");
        }
        else if(choice == 1) {
            printf("Enter the first number:");
            scanf("%d", &a);
            printf("Enter the second number:");
            scanf("%d", &b);
            printf("%d + %d = %d\n", a, b, sum(a,b));
        }
        else if(choice == 2) {
            printf("Enter the first number:");
            scanf("%d", &a);
            printf("Enter the second number:");
            scanf("%d", &b);
            printf("%d - %d = %d\n", a, b, diff(a,b));
        }
        else if(choice == 3) {
            printf("Enter the first number:");
            scanf("%d", &a);
            printf("Enter the second number:");
            scanf("%d", &b);
            printf("%d * %d = %d\n", a, b, product(a,b));
        }
        else {
            printf("You entered an invalid number.\n\n");
        }
    }while(choice>0);
}
int sum(a, b) {
    int summa;
    summa = a + b;
    return summa;
}
int diff(a, b) {
    int difference;
    difference = a - b;
    return difference;
}
int product(a, b) {
    int production;
    production = a * b;
    return production;
}
//1: sum of two numbers
//2: difference of two numbers
//3: product of two numbers
//        <0: terminate the program
//        Select calculation:1
//Enter the first number:55
//Enter the second number:33
//55 + 33 = 88
//
//1: sum of two numbers
//2: difference of two numbers
//3: product of two numbers
//        <0: terminate the program
//        Select calculation:2
//Enter the first number:14
//Enter the second number:41
//14 - 41 = -27
//
//1: sum of two numbers
//2: difference of two numbers
//3: product of two numbers
//        <0: terminate the program
//        Select calculation:3
//Enter the first number:4
//Enter the second number:5
//4 * 5 = 20
//
//1: sum of two numbers
//2: difference of two numbers
//3: product of two numbers
//        <0: terminate the program
//        Select calculation:-1
//Terminating the program...
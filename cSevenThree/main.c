#include <stdio.h>

int smallest();
int largest();

void main() {
    int a;
    int b;
    int c;


    printf("Enter the 1. number:");
    scanf("%d", &a);
    printf("Enter the 2. number:");
    scanf("%d", &b);
    printf("Enter the 3. number:");
    scanf("%d", &c);


    printf("Among the numbers you entered,"
           "\n the largest was %d and the smallest was %d.",largest(a, b, c), smallest(a, b, c));
}


int smallest(a, b, c) {
    int j;
    if (a < b && a < c) {
        j = a;
    }
    else if (b < a && b < c) {
        j = b;
    }
    else {
        j = c;
    }
    return j;
}
int largest(a, b, c) {
    int k;
    if (a > b && a > c) {
        k = a;
    }
    else if (b > a && b > c) {
        k = b;
    }
    else {
        k = c;
    }
    return k;
}
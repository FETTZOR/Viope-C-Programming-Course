#include <stdio.h>
main()
{
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");
    int user_input;
    int count = 0;
    double average;
    double sum;
    do
    {
        printf("Enter score (4-10):");
        scanf("%d", &user_input);

        if(user_input >= 0) {
//            printf("Enter score (4-10):");
            count = count + 1;
            sum = user_input + sum;
        }
        else if(user_input < 0) {
            average = sum / count;
            printf("You entered %d scores.", count);
            printf("\nAverage score: %.2f", average);
            printf("\n");

        }
    }
    while(user_input > 0);

    return 0;
}


//The program calculates the average of scores you enter.
//End with a negative integer.
//Enter score (4-10):7
//Enter score (4-10):8
//Enter score (4-10):9
//Enter score (4-10):10
//Enter score (4-10):4
//Enter score (4-10):4
//Enter score (4-10):5
//Enter score (4-10):-1
//You entered 7 scores.
//Average score: 6.71
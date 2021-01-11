#include<stdio.h>

int main()
{
    int days;
    int i;
    double counter = 0;
    double average;
    double my_list[30];
    printf("The program calculates the total hours worked during\n");
    printf("a specific period and the average length of a day.\n");

    printf("How many days:");
    scanf("%d", &days);

    for(i=1; i<=days; i++) {
        printf("Enter the working hours for day %d:", i);
        scanf("%lf", &my_list[i]);
        counter = my_list[i] + counter;
    }
    average = counter / days;
    printf("\nTotal work hours: %.2f\n", counter);
    printf("Average work day length: %.2f\n",average);
    printf("Inputted hours: ");
    for(int f = 1; f <= days; f++) {
        printf(" %.2f",my_list[f]);
    };

}



//The program calculates the total hours worked during
//a specific period and the average length of a day.
//
//How many days:3
//Enter the working hours for day 1:5.5
//Enter the working hours for day 2:6.6
//Enter the working hours for day 3:7.7
//
//Total hours worked: 19.8
//Average length of day: 6.6
//Hours entered: 5.5 6.6 7.7
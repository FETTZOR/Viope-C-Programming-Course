#include <stdio.h>

    int main()
    {
      int user_choose;
      int first_number;
      int second_number;
      int sum;
      int sub;
      int multiplication;


        printf("1: subtraction\n2: addition\n3: multiplication\nSelect function:");
        scanf("%d", &user_choose);

        printf("Enter the first number:");
        scanf("%d", &first_number);
        printf("Enter the second number:");
        scanf("%d", &second_number);

        sum = first_number + second_number;
        sub = first_number - second_number;
        multiplication = first_number * second_number;
    switch(user_choose)
     {
       case 1:
       {
           printf("%d - %d = %d\n", first_number, second_number, sub );
         break;
      }       case 2:
      {
          printf("%d + %d = %d\n", first_number, second_number, sum );
         break;
       }
       case 3:
       {
           printf("%d * %d = %d", first_number, second_number, multiplication );
         break;
      }
       default:
         printf("Your input is outside the allowed range.");
  }
    return 0;
  }
//sum = first_number + second_number;
//minus = first_number - second_number;
//multiplication = first_number * second_number;
//printf("%d + %d = %d\n", first_number, second_number, sum );
//printf("%d - %d = %d\n", first_number, second_number, minus );
//printf("%d * %d = %d", first_number, second_number, multiplication );
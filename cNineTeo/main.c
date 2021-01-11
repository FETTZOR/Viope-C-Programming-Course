#include<stdio.h>

int main()
{

    FILE *my_file;
    int num_one,
    num_two,
    num_three,
    num_four,
    sum=0;

    if((my_file = fopen("numbers.s", "r")) == NULL){
        printf("File not exists");
        return 0;
    }
    else
    {
        fscanf(my_file, "%d %d %d %d ", &num_one, &num_two, &num_three, &num_four);
        fclose(my_file);

        printf("Numbers found in the file numbers.s:\n");
        printf("%d, %d, %d and %d\n", num_one, num_two, num_three, num_four);

        sum= num_one + num_two + num_three + num_four;
        printf("Sum of the numbers: %d\n",sum);
    }

    return 0;
}
#include <stdio.h>
int main()
{
    FILE *opening;

    opening = fopen("hello.usr", "w");

    if(opening == NULL){
        printf("An error occurred when opening the file!");
    }
    else {
        fprintf(opening, "Hello world!\n");
        printf("Writing to the file was successful.\n"
               "Closing the program.\n");
        fclose(opening);
    }
    return 0;
}
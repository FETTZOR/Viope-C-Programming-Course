#include<stdio.h>

int main()
{
    char user_input[100];
    char first_name[100];
    char last_name[100];
    FILE* fp;
    printf("The program saves your first and last name into a file.\n");

    printf("Enter your first name:\n");
    scanf("%s",&first_name[0]);
    printf("Enter your last name:\n");
    scanf("%s",&last_name[0]);
    printf("File where you want to save your name:\n");
    scanf("%s",&user_input[0]);
    fp=fopen(user_input, "w");
    fprintf(fp, "%s", first_name);
    fprintf(fp, "%s", last_name);
    printf("\nSuccessfully saved the data!");
    fclose(fp);

}
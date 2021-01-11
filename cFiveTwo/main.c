#include <stdio.h>
/* This is a fine program */

int main(){
    char user_type_of_drink;
    int user_cups_count;

    printf("Do you drink coffee or tea (c/t)?");
    user_type_of_drink = getchar();

    printf("How many cups do you drink daily:");
    scanf("%d", &user_cups_count);
    if (user_type_of_drink == 'c'){
        if (user_cups_count >= 0 && user_cups_count <= 2){
            printf("You don't drink a lot of coffee, do you?");
        }

        else if (user_cups_count >= 3 && user_cups_count <= 20){
            printf("You drink a lot of coffee!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }
    else if (user_type_of_drink == 't') {
        if (user_cups_count >= 0 && user_cups_count <= 2){
            printf("You don't drink a lot of tea.");
        }

        else if (user_cups_count >= 3 && user_cups_count <= 20){
            printf("You drink a lot of tea!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }
    else {
        printf("An error occurred in the program!");
    }

    return 0;
}

//
//Write a program that first asks the user whether they drink coffee or tea and then how many cups a day.
//Finally, the program prints a statement in accordance with the following instructions: Coffee 0 to 2 cups:
//"You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", Tea 0-2 cups:
//"You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", Otherwise "An error occurred in the program!"
//The number of cups shall be processed as an integer variable and the drink as a character variable (c/t).
//You do not need to account for upper case letters.
//
//Hint:
//Spend enough time on program design before you start typing your program. You can get help for the exercise in the learning material for Chapter 4.
//
//Do you drink coffee or tea (c/t)?s
//        How many cups do you drink daily:55
//An error occurred in the program!
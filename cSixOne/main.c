    #include <stdio.h>

    int main()
    {
      int i;
      int user_input;
      printf("Enter an integer: ");
      scanf("%d", &user_input);
      for(i = 1; i <= user_input; i++)
      {
        printf("%d\n", i);
     }
     return 0;
   }
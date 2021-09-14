#include <stdio.h>

#include <stdlib.h>

int main() {

  int num;
  int a = 1;


  srand(time(0));

  printf("Welcome to the random dice roll generator\n");
  sleep(1);
  printf("Please type \"0\" to generate a dice: ");
  scanf("%d", &a);

        if (a == 0) {
        for (int i = 0; i < 1; i++)
          num = 1 + rand() % 6;
          printf("Your magic dice roll is...%d\n", num);
          sleep(100);
      }

      else {
        printf("Bro, you can't even press 0?\nRestart the program and try again.");
          sleep(3);
      }


  return (0);
}

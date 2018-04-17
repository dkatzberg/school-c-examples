/* Copyright: Daniel Katzberg
This solution shows the default loops in C/C++.
This solution is without any templates, self coded headers and function.
*/
#include <stdio.h>

int main()
{
  int forLoopIMax = 5;
  int forLoopJMax = 10;
  int whileCounter = 0;

  printf("-------------------------------------\n");

  /* The init, condition check and the re-init steps are in the 'for' line.*/
  for (int i = 0; i <= forLoopIMax; i++) {
    printf("First Example: For Loop: i = %d\n", i);
  }

  printf("-------------------------------------\n");

  /* Simple example for combined for loops. */
  for (int i = 0; i <= forLoopIMax; i++) {
    for (int j = 0; j <= forLoopJMax; j++) {
      printf("Second Example: For Loop: i = %d", i);
      printf(" and j = %d\n", j);
    }
  }

  printf("-------------------------------------\n");

  /* Endless for loop with break command.*/
  for (;;) {
    printf("Third Example: Endless for loop with break command.\n");
    break; //Leave the loop
  }

  printf("-------------------------------------\n");

  /* While Loops. Init is before the while loop. Condition check is in the
  'while' iteration line. The re-init step is in the loop. */
  while (whileCounter <= forLoopIMax) {
    printf("Forth Example: For Loop: whileCounter = %d\n", whileCounter);
    whileCounter += 1;
  }

  printf("-------------------------------------\n");

  /* Do-While Loop: The first iteration happens guaranteed. */
  do {
    printf("Fifth Example: For Loop: whileCounter = %d\n", whileCounter);
    whileCounter += 1;
  } while (whileCounter <= forLoopIMax);

  printf("-------------------------------------\n");

  /* Endless while loop with break command.*/
  while (true) {
    printf("Sixth Example: Endless while loop with break command.\n");
    break; //Leave the loop
  }

  printf("-------------------------------------\n");
}

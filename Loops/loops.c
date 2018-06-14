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



  /* While Loops. Init is before the while loop. Condition check is in the
  'while' iteration line. The re-init step is in the loop. */
  while (whileCounter <= forLoopIMax) {
    printf("Forth Example: For Loop: whileCounter = %d\n", whileCounter);
    whileCounter += 1;
  }

}

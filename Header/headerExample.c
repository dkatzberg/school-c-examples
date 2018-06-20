/* Copyright: Daniel Katzberg
This c file shows the implementation of the defined header function.
It has the same name like the header file.
*/
#include <stdio.h>
#include "headerExample.h"

/* Implementation of the header function headerExampleFunc.
This method just print an string on the terminal/console. */
void headerExampleFunc(char character) {
  printf("headerExampleFunc with character: %c \n", character);
}

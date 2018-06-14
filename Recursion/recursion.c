/* Copyright: Daniel Katzberg
This solution shows a simple recursion in C
to sum all integers until a given counter limit.
This solution is without any templates and self coded headers.
*/
#include <stdio.h>

/*
Recursive function to sum all numbers until a given counterLimit. The counterLimit
*/
int summarize(int counter, int counterLimit, int sum) {
  sum += counter;
  if (counter == counterLimit) {
    return sum;
  } else {
    counter += 1;
    return summarize(counter, counterLimit, sum);
  }
}

/*
The main method / starter method of the c program.
*/
int main()
{
  //Init
  int counter = 0;
  unsigned int counterLimit = 0;
  int sum = 0;

    printf("Limit to sum:\n");
    scanf("%d", &counterLimit);

  //Sum all numbers until the counterLimit
  sum = summarize(counter, counterLimit, sum);

  //Result Output
  printf("The sum until %d is %d \n", counterLimit, sum);
}

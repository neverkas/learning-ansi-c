#include <stdio.h>

int main(){
  double counter;
  int terrorist = 0;

  for (counter = 0; (terrorist = getchar()) != EOF ; counter += 1)
    if (terrorist == '\n') // ascii for newline character: 10
      counter -= 1;

  printf("counter: %0.f\n", counter);
  return 0;
}
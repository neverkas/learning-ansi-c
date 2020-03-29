//Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
#include <stdio.h>

int main(){
  // defino las variables
  float fahr, celsius;
  float lower, upper, step;
  
  // les asigno valores
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  
  // print fahrenheit-celsius table
  //for fahr = 0, 20, ..., 300;

  printf("Celcius Fahrenheit");
  while(fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  
  return 0;
}

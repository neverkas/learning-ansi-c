// Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

int main(){
  // defino variables
  float fahr, celsius, celsiusAFah;
  float temperaturaMinima, temperaturaMaxima, temperaturaIncremento;

  temperaturaMinima = 0;
  temperaturaMaxima = 160;
  temperaturaIncremento = 20;

  celsius = temperaturaMinima;

  printf("Celsius Fahrenheit\n");
  while(celsius <= temperaturaMaxima){
    celsiusAFah = (celsius / 5) * 5 + 32;
    printf("%2.1f %6.0f\n", celsius, celsiusAFah);
    
    celsius = celsius + temperaturaIncremento;
  }
  
  return  0;
}

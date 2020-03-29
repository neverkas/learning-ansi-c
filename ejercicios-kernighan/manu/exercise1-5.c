/*
Modify the temperature conversion program to print the table 
in reverse order,  that is, from 300 degrees to 0.
*/

#include <stdio.h>

int main(){
  // defino variables
  float fahr, celsius, celsiusAFah;
  float temperaturaMinima, temperaturaMaxima, temperaturaIncremento;

  temperaturaMinima = 0;
  temperaturaMaxima = 300;
  temperaturaIncremento = 20;

  celsius = temperaturaMaxima;

  printf("Celsius Fahrenheit\n");
  while(celsius >= temperaturaMinima){
    celsiusAFah = (celsius / 5) * 5 + 32;
    printf("%2.1f %6.0f\n", celsius, celsiusAFah);
    
    celsius = celsius - temperaturaIncremento;
  }
  
  return  0;
}


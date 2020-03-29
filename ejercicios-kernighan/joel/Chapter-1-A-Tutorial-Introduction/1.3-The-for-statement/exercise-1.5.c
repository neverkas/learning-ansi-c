#include <stdio.h>

int main(){
  float temperatureInCelsius, temperatureInFahrenheits, step, upper;

  printf("temperature in celsius: ");
  scanf("%f", &temperatureInCelsius);

  printf("step value: ");
  scanf("%f", &step);

  printf("\ncelsius\t  fahr\n");
  for (upper = temperatureInCelsius; upper >= 0; upper -= step){
    printf("%7.0f %7.1f\n", upper, (9.0 / 5.0) * upper + 32);
  }
  
  return 0;
}

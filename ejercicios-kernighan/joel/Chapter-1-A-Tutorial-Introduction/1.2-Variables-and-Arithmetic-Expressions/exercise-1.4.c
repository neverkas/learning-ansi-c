#include <stdio.h>

int main(){
  float temperatureInCelsius, temperatureInFahrenheits, step, lower, upper;

  printf("temperature in celsius: ");
  scanf("%f", &temperatureInCelsius);

  printf("upper value: ");
  scanf("%f", &upper);

  printf("step value: ");
  scanf("%f", &step);

  lower = temperatureInCelsius;

  printf("\ncelsius\t  fahr\n");
  while (lower <= upper)
  {
    temperatureInFahrenheits = (9.0 / 5.0) * lower + 32;
    printf("%7.0f %7.1f\n", lower, temperatureInFahrenheits);
    lower += step;
  }
  return 0;
}
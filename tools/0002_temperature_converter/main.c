#include <stdio.h>
/*
 *°Celsius = 5 * (fahr - 32) / 9;
 * Fahrenheit = (cels * 1.8) + 32;
 */

int LOWER = 1;
int HIGHER = 300;

float fahr_to_celsius(int fahr)
{
  float value = 0;
  value = 5.0 * (fahr - 32) / 9.0;
  return value;
}

float celsius_to_fahr(int celsius)
{
  float value = 0;
  value = (celsius * 1.8) + 32;
  return value;
}

int main()
{
  printf("Let's print Fahrenheit table to Celsius\n");
  float value = 0;
  for (int i = HIGHER; i >= LOWER; i -= 20)
  {
    value = fahr_to_celsius(i);
    printf("%3d %6.2f\n", i, value );
    value = 0;
  }
  printf("\n-------\n");
  // printf("\nNow, let's print the opposite");
  // for (int i = LOWER; i <= HIGHER; i += 20)
  // {
  //   value = celsius_to_fahr(i);
  //   printf("%3d %6.2f\n", i, value );
  //   value = 0;
  // }

  return 0;
}
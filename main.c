#include <stdio.h>
#include <stdint.h>
#include <arm/limits.h>

/*
 *°C=(5/9)(°F-32)
 *
 */

int LOWER = 0;
int HIGHER = 300;

int fahr_to_celsius(int fahr)
{
  int value = 0;
  value = 5 * (fahr - 32) / 9;
  return value;
}

int check_limits()
{
  printf("int has size %zu bytes\n", sizeof(int));
  printf("int max: %d\n", INT_MAX);
  printf("int min: %d\n", INT_MIN);
  printf("char max: %d\n", CHAR_MAX);
  printf("char min: %d\n", CHAR_MIN);
}

int main()
{
  check_limits();
  printf("Let's print Fahrenheit table to Celsius\n");
  int value = 0;
  for (int i = LOWER; i <= HIGHER; i += 20)
  {
    value = fahr_to_celsius(i);
    printf("%d\t%d\n", i, value );
    value = 0;
  }
  return 0;
}
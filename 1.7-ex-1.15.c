#include <stdio.h>
int fahr();
main ()
{
        fahr();
        return 0;
}

int fahr()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  /* lower limit of temperature table */
  /* upper limit */
  /* step size */

  fahr = lower;

  printf("fahren-cel\n");

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0) ;
    printf("%6.1f %3.0f\n", celsius, fahr);
    fahr = fahr + step;
  }      
}
  


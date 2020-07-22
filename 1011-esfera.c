#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main( void )
{
  double raio, volume;
  scanf("%lf", &raio );
  volume = ( 4.0 * PI * pow(raio,3) )/3.0;
  printf("VOLUME = %.3f\n", volume );
  return( 0 );
}

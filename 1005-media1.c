#include <stdio.h>

#define PESO_A  3.5
#define PESO_B  7.5

int main( void )
{
  double A, B;
  double media;
  scanf("%lf", &A );
  scanf("%lf", &B );
  media = (A*PESO_A + B*PESO_B)/(PESO_A + PESO_B);
  printf("MEDIA = %.5f\n", media );
  return( 0 );
}

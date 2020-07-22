#include <stdio.h>

#define PESO_A  2.0
#define PESO_B  3.0
#define PESO_C  5.0

int main( void )
{
  double A, B, C;
  double media;
  scanf("%lf", &A );
  scanf("%lf", &B );
  scanf("%lf", &C );
  media = (A*PESO_A + B*PESO_B+ C*PESO_C)/(PESO_A + PESO_B + PESO_C);
  printf("MEDIA = %.1f\n", media );
  return( 0 );
}

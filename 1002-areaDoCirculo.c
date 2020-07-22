/*
  Compilar: gcc -lm 1002-areaDoCirculo.c

  https://www.ime.usp.br/~pf/algoritmos/apend/math.h.html

  https://en.wikipedia.org/wiki/IEEE_754

  https://pt.stackoverflow.com/questions/219211/qual-a-forma-correta-de-usar-os-tipos-float-double-e-decimal
*/

#include <stdio.h>

int main( void )
{
  double n = 3.14159;
  double raio, area;
  scanf("%lf", &raio );
  area = n * raio * raio;
  printf("A=%.4f\n", area );
  return( 0 );
}

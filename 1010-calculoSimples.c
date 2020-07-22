#include <stdio.h>

int main( void )
{
  int cod1, nPecas1, cod2, nPecas2;
  double valor1, valor2;

  scanf("%d %d %lf", &cod1, &nPecas1, &valor1 );
  scanf("%d %d %lf", &cod2, &nPecas2, &valor2 );

  printf("VALOR A PAGAR: R$ %.2f\n", nPecas1*valor1+nPecas2*valor2 );
  return( 0 );
}

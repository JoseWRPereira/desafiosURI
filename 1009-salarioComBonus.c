#include <stdio.h>

int main( void )
{
  char nomeVendedor[20];
  double salarioFixo, montanteVendas;

  scanf("%s",  nomeVendedor );
  scanf("%lf", &salarioFixo );
  scanf("%lf", &montanteVendas );

  printf("TOTAL = R$ %.2f\n", salarioFixo + montanteVendas * 0.15 );
  return( 0 );
}

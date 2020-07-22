#include <stdio.h>

int main( void )
{
  int numFuncionario, horasTrabalhadas;
  double valorHora;
  scanf("%d",  &numFuncionario );
  scanf("%d",  &horasTrabalhadas );
  scanf("%lf", &valorHora );

  printf("NUMBER = %d\n", numFuncionario );
  printf("SALARY = U$ %.2f\n", valorHora * horasTrabalhadas );
  return( 0 );
}

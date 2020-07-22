#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main( void )
{
  double A,B,C;
  double triangulo, circulo, trapezio, quadrado, retangulo;

  scanf("%lf %lf %lf", &A, &B, &C );
  
  triangulo = A*C/2.0;
  circulo = PI*pow(C,2);
  trapezio = ((A+B)*C)/2.0;
  quadrado = pow(B,2);
  retangulo = A*B;

  printf("TRIANGULO: %.3f\n", triangulo );
  printf("CIRCULO: %.3f\n", circulo );
  printf("TRAPEZIO: %.3f\n", trapezio );
  printf("QUADRADO: %.3f\n", quadrado );
  printf("RETANGULO: %.3f\n", retangulo );  
  return( 0 );
}



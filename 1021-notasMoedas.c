// Alterar o código para atender ao seguinte conjunto de
// notas e moedas:
//
// Notas: 100.00, 50.00, 10.00, 5.00, 2.00
// Moedas:  1.00,  0.50,  0.33, 0.15, 0.10, 0.05, 0.01
//

#include <stdio.h>

// Estrutura de dados
struct banco_T
{
    char nome[6];
    double valor[6];
    int qtd[6];
};

double processaValor( double valor, struct banco_T * dinheiro )
{
    int i;
    for(i=0; i<6; i++ )
    {
        dinheiro->qtd[i] = valor / dinheiro->valor[i];

        printf("%d %s(s) de R$ %.2f\n",
                dinheiro->qtd[i],
                dinheiro->nome,
                dinheiro->valor[i]);

        valor -= (dinheiro->valor[i] * dinheiro->qtd[i] );
    }
    return valor;
}

int main()
{

    struct banco_T nota = { {"nota"},
                            {100.0,50.0,20.0,10.0,5.0,2.0},
                            {0,0,0,0,0,0} };
    struct banco_T moeda = { {"moeda"},
                            {1.0,0.50,0.20,0.10,0.05,0.01},
                            {0,0,0,0,0,0} };

    double valorTotal;

    scanf("%lf", &valorTotal);
    valorTotal += 0.000001;

    printf("NOTAS:\n");
    valorTotal = processaValor(valorTotal, &nota);

    printf("MOEDAS:\n");
    valorTotal = processaValor(valorTotal, &moeda);

    return 0;
}

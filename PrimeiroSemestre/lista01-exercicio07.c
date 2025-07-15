#include <stdio.h>

int main()
{
    float valor1;
    float valor2;
    float multiplicacao_valor1;
    float multiplicacao_valor2;
    float resultado;
    
    printf("Digite um numero real: \n");
    scanf("%f", &valor1);
    
    printf("Digite outro numero real: \n");
    scanf("%f", &valor2);
    
    multiplicacao_valor1 = valor1 * 4;
    multiplicacao_valor2 = valor2 * 6;
    resultado = (multiplicacao_valor1 + multiplicacao_valor2) /2 ;
    
    printf("O resultado desta operacao e: %0.2f\n", resultado);
    
    
    
    return 0;
}

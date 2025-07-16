#include <stdio.h>
int main()
{
    int valor1;
    int valor2;
    int resultado;
    
    printf("Digite um valor: ");
    scanf("%d", &valor1);
    
    printf("Digite outro valor: ");
    scanf("%d", &valor2);
    
    resultado = valor1 * valor2;
    
    printf("O resultado da multiplicação de %d * %d = %d ", valor1,valor2,resultado);
}

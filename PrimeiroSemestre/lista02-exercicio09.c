#include <stdio.h>
int main()
{
    int valor1, valor2 = 0;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &valor1);
    
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &valor2);
    
    if(valor1 < valor2 ){
        printf("O menor valor é: %d", valor1);
    }
    if(valor2 < valor1 ){
        printf("O menor valor é: %d", valor2);
    }
    if(valor1 == valor2 ){
        printf("O %d é igual a %d", valor1, valor2);
    }
    
    return 0;
}
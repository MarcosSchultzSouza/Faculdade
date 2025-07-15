#include <stdio.h>
int main()
{
    int valor1, valor2;
    
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &valor1);
    
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &valor2);
    
    if(valor1 > valor2 ){
        printf("O maior valor é: %d", valor1);
    }
    if(valor1 < valor2){
        printf("O maior valor é: %d", valor2);
    }
    if(valor1 = valor2){
        printf("O %d é igual a %d.", valor1, valor2);
    }
    
    return 0;
}
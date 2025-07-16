#include <stdio.h>
int main()
{
    int numero;
    int soma_pares = 0;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares + numero;
    }
    
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares + numero;
    }
    
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares +numero;
    }
    
    printf("Digite o quarto numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares + numero;
    }
    
    printf("Digite o quinto numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares + numero;
    }
    
    printf("Digite o sexto numero inteiro: \n");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        soma_pares = soma_pares + numero;
    }
    
    printf("A soma dos valores pares informados é: %d", soma_pares);
    
    return 0;
}
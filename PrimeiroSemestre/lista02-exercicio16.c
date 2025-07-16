#include <stdio.h>
int main()
{
    int numero, numero1, numero2, soma, quadrado_soma;
    
    printf("Digite um numero inteiro de quatro digitos: \n");
    scanf("%d", &numero);
    
    numero1 = numero / 100;
    numero2 = numero % 100;
    
    soma = numero1 + numero2;
    
    quadrado_soma = soma * soma;
    
    if(quadrado_soma == numero){
        printf("O numero %d possui a caracteristica 30+25=55 e 552=3025.\n", numero);
    }else{
        printf("O numero %d nao possui a caracteristica desejada.\n", numero);
    }
    
    return 0;
}
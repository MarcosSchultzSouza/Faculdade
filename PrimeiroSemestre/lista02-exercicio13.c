#include <stdio.h>
int main()
{
    int a, b, c;
    int escolha;
    int resultado;
    
    printf("Escolha um dos numero de ( 1 a 4 ). \n");
    scanf("%d", &escolha);
    
    printf("Digite o valor nomeado como a: \n");
    scanf("%d", &a);
    
    printf("Digite o valor nomeado como b: \n");
    scanf("%d", &b);
    
    printf("Digite o valor nomeado como c: \n");
    scanf("%d", &c);
    
    
    if(escolha == 1 ){
        resultado = a * b * c;
        printf("Resultado da multiplicação: %d \n", resultado);
    }
    if(escolha == 2 ){
        resultado = a + b + c;
        printf("Resultado da soma foi de: %d \n", resultado);
    }
    if(escolha == 3 ){
        resultado = a - b - c;
        printf("Resultado da subtração foi de: %d \n", resultado);
    }
    if(escolha == 4 ){
        resultado = (a * a * a) + (b * b * b) + (c * c * c);
        printf("Soma dos cubos: %d \n", resultado);
    }
    else{
        printf("Voce não escolheu nenhum dos numeros ( 1 a 4) \n");
    }
    
    return 0;
}
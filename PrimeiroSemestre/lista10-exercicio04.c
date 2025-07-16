#include <stdio.h>
int main()
{
    int vetor[10];
    int cont;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número:\n");
        scanf("%d", &vetor[cont]);
    }
    
    printf("Posição de números menores que zero: \n");
    
    for(cont=0; cont<10; cont++){
        if(vetor[cont] < 0){
            printf("- %d ", cont);
        }
    }
    
    return 0;
}
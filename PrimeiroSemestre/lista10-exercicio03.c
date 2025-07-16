#include <stdio.h>
int main()
{
    int vetor[10];
    int cont;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número:\n");
        scanf("%d", &vetor[cont]);
    }
    
    printf("Numeros pares:\n");
    
    for(cont=0; cont<10; cont++){
        if(vetor[cont] %2 == 0){
            printf("- %d ", vetor[cont]);
        }
    }
    
    printf("\nNumeros impares:\n");
    
    for(cont=0; cont<10; cont++){
        if(vetor[cont] %2 != 0){
            printf("- %d ", vetor[cont]);
        }
    }
    
    return 0;
}
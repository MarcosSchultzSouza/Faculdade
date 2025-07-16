#include <stdio.h>
int main()
{
    int vetor[10];
    int cont, cont2, primo;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número: \n");
        scanf("%d", &vetor[cont]);
    }
    
    printf("Posição de números primos:\n\n");
    
    for(cont=0; cont<10; cont++){
        primo = 0;
        for(cont2=2; cont2<vetor[cont]/2; cont2++){
            if(vetor[cont] % cont2 == 0){
                primo = 1;
            }
        }
        if(primo == 0){
            printf("- %d ", cont);
        }
    }
    
    return 0;
}
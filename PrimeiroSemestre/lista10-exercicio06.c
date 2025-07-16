#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v[10];
    int cont;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número: (%d)\n", cont+1);
        scanf("%d", &v[cont]);
    }
    
    printf("O sinal módulo seria: \n");
    
    for(cont=0; cont<10; cont++){
        if(v[cont] < 0){
            printf("- %d ", abs(v[cont]));
        }
    }
    
    return 0; 
}

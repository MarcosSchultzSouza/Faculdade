#include <stdio.h>
int main()
{
    int v[10];
    int i, aux;
    
    for(i=0; i<10; i++){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
    }
    
    printf("Antes da troca!!!\n");
    
    for(i=0; i<10; i++){
        printf(" - %d", v[i]);
    }
    
    printf("\n\nDepois da troca!!!\n");
    
    for(i=0; i<9; i++){
        if(i % 2 != 0){
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }
    
    for(i=0; i<10; i++){
        printf(" - %d", v[i]);
    }
    
    return 0;
}
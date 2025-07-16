#include <stdio.h>
int main()
{
    int v[10];
    int i, aux = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
    }
    
    printf("Elementos antes da troca!!!\n");
    
    for(i=0; i<10; i++){
        printf(" - %d", v[i]);
    }
    
    printf("\n\nElementos depois da troca!!!\n");
    
    for(i=0; i<5; i++){
        aux = v[i];
        v[i] = v[9-i];
        v[9-i] = aux;
    }
    
    for(i=0; i<10; i++){
        printf(" - %d", v[i]);
    }
    
    return 0;
}

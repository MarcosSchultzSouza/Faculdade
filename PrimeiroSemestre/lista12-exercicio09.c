#include <stdio.h>
int main()
{
    int v[30], j[30];
    int i, aux;
    
    for(i=0; i<30; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<30; i++){
        j[29-i] = v[i];
    }
    
    printf("Antes de mudar!!!\n");
    
    for(i=0; i<30; i++){
        printf(" %d ", v[i]);
    }
    
    printf("\nDepois da troca!!!\n");
    
    for(i=0; i<30; i++){
        printf(" %d ", j[i]);
    }
    
    return 0;
}
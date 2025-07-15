#include <stdio.h>
int main()
{
    int x[10];
    int i = 0, aux;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &x[i]);
    }
    
    printf("Elementos antes da troca!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d", x[i]);
    }
    
    for(i=0; i<9; i++){
        if(x[i] > x[i+1]){
            aux = x[i];
            x[i] = x[i+1];
            x[i+1] = aux;
        }
    }
    
    printf("\n\nElementos trocados!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d", x[i]);
    }
    
    return 0;
}

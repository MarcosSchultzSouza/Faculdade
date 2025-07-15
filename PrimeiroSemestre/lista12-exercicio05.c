#include <stdio.h>
int main()
{
    int v[6];
    int i, cont = 0, maior = -1000, posicao = 0, aux = 0, j;
    
    for(i=0; i<6; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Antes da troca!!!\n");
    
    for(i=0; i<6; i++){
        printf("- %d ", v[i]);
    }
    
    printf("\nDepois da troca!!!\n");
    
    for(i=0; i<6; i++){
        if(v[i] > maior){
            posicao = i;
        }
    }
    
    for(i=0; i<posicao; i++){
        aux = v[0];
        for(j=0; j<5; j++){
            v[j] = v[j+1];
        }
        v[5] = aux;
    }
    
    for(i=0; i<6; i++){
        printf("- %d ", v[i]);
    }
    
    return 0;
}
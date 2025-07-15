#include <stdio.h>

int main()
{
    int v[30];
    int i, j, aux = 0;
    
    for(i=0; i<20; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("As primeiras 20 posições: \n");
    
    for(i=0; i<20; i++){
        printf("- %d ", v[i]);
    }
    
    printf("\n\nDepois em ordem crescente:\n");
    
    for(i=0; i<20; i++){
        for(j=i+1; j<20; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    for(i=0; i<20; i++){
        printf("- %d ", v[i]);
    }
    
    for(i=20; i<30; i++){
        printf("\nDigite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Todos em ordem crescente:\n");
    
    for(i=0; i<30; i++){
        for(j=i+1; j<30; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
    for(i=0; i<30; i++){
        printf("- %d ", v[i]);
    }

    return 0;
}

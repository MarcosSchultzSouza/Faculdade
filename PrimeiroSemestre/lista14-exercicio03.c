#include <stdio.h>
int main()
{
    int v1[10], v2[10], v3[20];
    int i, j, cont = 0, aux = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v1[i]);
    }
    
    printf("Primeiro vetor em ordem decrescente: \n");
    
    for(i=0; i<10; i++){
        for(j=0; j<9; j++){
            if(v1[j] < v1[j+1]){
                aux = v1[j];
                v1[j] = v1[j+1];
                v1[j+1] = aux;
            }
        }
    }
    
    for(i=0; i<10; i++){
        printf(" %d", v1[i]);
    }
    
    for(i=0; i<10; i++){
        printf("\nDigite um número: (%d)\n", i+1);
        scanf("%d", &v2[i]);
    }
    
    printf("\n\nSegundo vetor em ordem decrescente: \n");
    
    for(i=0; i<10; i++){
        for(j=0; j<9; j++){
            if(v2[j] < v2[j+1]){
                aux = v2[j];
                v2[j] = v2[j+1];
                v2[j+1] = aux;
            }
        }
    }
    
    for(i=0; i<10; i++){
        printf(" %d", v2[i]);
    }
    
    for(i=0; i<10; i++){
        v3[cont] = v1[i];
        cont++;
        v3[cont] = v2[i];
        cont++;
    }
    
    printf("\nTerceiro vetor de 20 posições em ordem decrescente:\n");
    
    for(i=0; i<20; i++){
        for(j=0; j<19; j++){
            if(v3[j] < v3[j+1]){
                aux = v3[j];
                v3[j] = v3[j+1];
                v3[j+1] = aux;
            }
        }
    }
    
    for(i=0; i<20; i++){
        printf(" %d", v3[i]);
    }
    
    return 0;
}
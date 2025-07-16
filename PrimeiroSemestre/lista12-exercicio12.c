#include <stdio.h>
int main()
{
    float v[5], v2[5], aux;
    int i, j;
    
    for(i=0; i<5; i++){
        printf("Digite um número: \n");
        scanf("%f", &v[i]);
    }
    
    for(i=0; i<5; i++){
        v2[i] = v[i];
    }
    
    for(i=0; i<1; i++){
        aux = v2[4];
        for(j=4; j>=0; j--){
            v2[j] = v2[j-1];
        }
        v2[0] = aux;
    }
    
    printf("Primeiro vetor!!!\n");
    
    for(i=0; i<5; i++){
        printf(" %.2f", v[i]);
    }
    
    printf("\nSegundo vetor!!!\n");
    
    for(i=0; i<5; i++){
        printf(" %.2f", v2[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    float v[15];
    int i = 0, rotacao = 0, aux = 0, j;
    
    for(i=0; i<15; i++){
        printf("Digite um número: \n");
        scanf("%f", &v[i]);
    }
    
    printf("Quantas vezes deseja fazer a rotação circular:\n");
    scanf("%d", &rotacao);
    
    for(i=0; i<rotacao; i++){
        aux = v[0];
        for(j=0; j<14; j++){
            v[j] = v[j+1];
        }
        v[14] = aux;
    }
    
    for(i=0; i<15; i++){
        printf(" - %.2f", v[i]);
    }
    
    return 0;
}

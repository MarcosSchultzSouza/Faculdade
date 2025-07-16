#include <stdio.h>
int main()
{
    int peso[5];
    float  altura[5], aux2 = 0;
    int i, j, aux = 0;
    
    for(i=0; i<5; i++){
        printf("Digite seu peso inteiro, e sua altura float: (De um de espaço)\n");
        scanf("%d %f", &peso[i], &altura[i]);
    }
    
    
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(altura[j] > altura[j+1]){
                aux2 = altura[j];
                altura[j] = altura[j+1];
                altura[j+1] = aux2;
                
                aux = peso[j];
                peso[j] = peso[j+1];
                peso[j+1] = aux;
            }
        }
    }
    
    printf("Peso em ordem crescente, junto com as alturas\n");
    
    for(i=0; i<5; i++){
        printf("A pessoa %d tem %.2f de altura, e pesa %d \n", i+1, altura[i], peso[i]);
    }
    
    return 0;
}
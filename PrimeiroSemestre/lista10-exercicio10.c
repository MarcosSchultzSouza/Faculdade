#include <stdio.h>

int main()
{
    int v[10];
    int i, menor = 1000, posicao = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        if(v[i] < menor){
            menor = v[i];
            posicao = i;
        }
    }
    
    printf("O menor valor digitado foi: %d \n", menor);
    printf("A sua posição é %d ", posicao);

    return 0;
}

#include <stdio.h>

int main()
{
    int v[10];
    int i, valorN = 0, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor N:\n");
    scanf("%d", &valorN);
    
    printf("O valor %d se encontra na(s) posição(s)\n", valorN);
    
    for(i=0; i<10; i++){
        if(v[i] == valorN){
            printf(" %d ", i);
            cont = 1;
        }
    }
    
    if(cont == 0){
        printf("Este número não consta no vetor:\n");
    }

    return 0;
}

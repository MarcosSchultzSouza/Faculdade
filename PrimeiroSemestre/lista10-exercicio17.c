#include <stdio.h>
int main()
{
    int v[10];
    int i, valor, j, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite um número para ver se esta entre os outros:\n");
        scanf("%d", &valor);
        cont = 0;
        
        for(j=0; j<10; j++){
            if(valor == v[j]){
                printf("O número %d consta na posição %d\n\n", valor, j);
                cont = 1;
            }
        }
        if(cont == 0){
            printf("Este número não consta no vetor:\n\n");
        }
    }
    
    return 0;
}

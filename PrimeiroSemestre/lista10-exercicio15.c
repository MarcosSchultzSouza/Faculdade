#include <stdio.h>
int main()
{
    int v[10];
    int i, valorN, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
    }
    
    printf("Digite um valor N: \n");
    scanf("%d", &valorN);
    
    for(i=0; i<10; i++){
        if(v[i] == valorN){
            cont++;
        }
    }
    
    if(cont == 0){
        printf("O valorN não esta no vetor:\n");
    }else{
        printf("O valorN está no vetor:\n");
    }
    
    return 0;
}

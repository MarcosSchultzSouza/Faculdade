#include <stdio.h>
int main()
{
    int v[10];
    int i = 0, w[10], j;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite outro número: (%d)\n", i+1);
        scanf("%d", &w[i]);
    }
    
    printf("Primeira lista!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v[i]);
    }
    
    printf("\n\nSeus divisores!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d = posição %d divisores =", v[i], i);
        for(j=0; j<10; j++){
            if(v[i] % w[j] == 0){
                printf(" %d ", w[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}

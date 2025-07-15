#include <stdio.h>
int main()
{
    int v[10];
    int i, maior = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    
    printf("O maior número digitado foi %d.", maior);
    
    return 0;
}

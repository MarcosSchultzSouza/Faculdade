#include <stdio.h>
int main()
{
    int v[20];
    int i, primeiro_termo = 0, razao;
    
    printf("Digite o primeiro termo:\n");
    scanf("%d", &primeiro_termo);
    
    printf("Digite a razão:\n");
    scanf("%d", &razao);
    
    for(i=0; i<20; i++){
        v[i] = primeiro_termo + i * razao;
    }
    
    for(i=0; i<20; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}

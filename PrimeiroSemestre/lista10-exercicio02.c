#include <stdio.h>
int main()
{
    int v[10];
    int cont;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número:\n");
        scanf("%d", &v[cont]);
    }
    
    printf("Os números em ordem contraria são: \n");
    
    for(cont=9; cont>=0; cont--){
        printf("- %d ", v[cont]);
    }
    
    return 0;
}
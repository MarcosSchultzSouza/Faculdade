#include <stdio.h>
int main()
{
    int v[10];
    int i;
    
    for(i=0; i<10; i++){
        printf("Digite um número:\n");
        scanf("%d", &v[i]);
    }
    
    printf("Os números digitados foram:\n");
    
    for(i=0; i<10; i++){
        printf("- %d ", v[i]);
    }
    
    return 0;
}
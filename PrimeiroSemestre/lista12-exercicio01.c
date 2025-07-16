#include <stdio.h>
int main()
{
    int v[10];
    int i;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<5; i++){
        printf(" %d - %d \n", v[i], v[9-i]);
    }
    
    return 0;
}
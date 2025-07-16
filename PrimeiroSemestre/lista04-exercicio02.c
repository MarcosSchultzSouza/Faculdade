#include <stdio.h>
int main()
{
    int i, ate_numero ;
    
    printf("informe um numero: \n");
    scanf("%d", &ate_numero);
    
    for(i=1; i<=ate_numero; i++){
        printf(" %d, ", i);
    }
    
    return 0;
}
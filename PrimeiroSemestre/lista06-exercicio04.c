#include <stdio.h>
int main()
{
    int dividendo = 0;
    int divisor = 0;
    int soma1 = 1;
    
    printf("Digite o seu dividendo: \n");
    scanf("%d",&dividendo);
    
    printf("Digite o seu divisor: \n");
    scanf("%d",&divisor);
    
    while(dividendo > divisor){
        
        dividendo = dividendo - divisor;
        if(dividendo > divisor){
            soma1++;
        }
    }
    
    printf("O resultado de sua divisão é: %d", soma1);
    
    return 0;
}
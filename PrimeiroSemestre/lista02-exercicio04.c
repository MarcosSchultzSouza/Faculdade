#include <stdio.h>
int main()
{
    int valor_inteiro;
    
    
    printf("Digite um numero inteiro:");
    scanf("%d", &valor_inteiro);
    
    if (valor_inteiro % 2 == 0 )
    {
        printf("Este é um numero par ");
    }
    
    else 
    {
        printf("Este numero é impar");
    }
    
    
    return 0;
}

#include <stdio.h>
int main()
{
    int numero_inteiro;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero_inteiro);
    
    if ( numero_inteiro >= 0)
    {
        printf("Esse numero %d é positivo\n", numero_inteiro);
    }
    
    if ( numero_inteiro < 0 )
    {
        printf("Esse numero %d é negativo \n", numero_inteiro);
    }
    
    return 0;
}

#include <stdio.h>
int main()
{
    int idade;
    
    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    
    if (idade >= 18 )
    {
    printf("Voce é maior de idade:");
    }
    
    if (idade < 18)
    printf("Voce é menor de idade:");
    
    
    return 0;
}

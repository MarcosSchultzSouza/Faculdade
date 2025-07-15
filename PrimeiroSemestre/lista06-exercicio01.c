#include <stdio.h>
int main()
{
    int i = 1, menor_valor = 100000000;
    
    while(i != 0){
        printf("Informe um número: \n");
        scanf("%d",&i);
        
        if(i < menor_valor && i > 0){
            menor_valor = i;
        }
    }
    
    printf("O menor valor é: %d", menor_valor);
    
    return 0;
}
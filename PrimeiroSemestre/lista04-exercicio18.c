#include <stdio.h>
int main()
{
    int i;
    int num_usuario = 0;
    int maior_valor = 0;
    int medio_valor = 0;
    int menor_valor = 0;
    
    for(i=1;i<=10;i++){
        printf("Digite um número: \n");
        scanf("%d",&num_usuario);
        
        if(num_usuario > maior_valor){
            maior_valor = num_usuario;
        }
        if(num_usuario < menor_valor){
            menor_valor = num_usuario;
        }
        
    }
    
    printf("Menor valor informado: %d\n", menor_valor);
    printf("Maior valor informado: %d\n", maior_valor);
    
    return 0;
}
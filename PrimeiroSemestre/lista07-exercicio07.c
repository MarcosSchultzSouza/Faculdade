#include <stdio.h>
int main()
{
    int i,j, inicio = 0, fim = 0, resultado = 0;
    
    printf("Digite um número para o inicio: \n");
    scanf("%d", &inicio);
    
    printf("Digite o ultimo número: \n");
    scanf("%d", &fim);
    
    for(i=inicio; i<=fim; i++){
        printf("\nTABUADA DO %d \n\n", inicio);
        
        for(j=1; j<=1000; j++){
            resultado = i * j;
            printf("%d X %d = %d \n",i,j, resultado);
        }
        inicio++;
    }
    
    return 0;
}
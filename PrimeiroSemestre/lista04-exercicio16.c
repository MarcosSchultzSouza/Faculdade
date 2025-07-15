#include <stdio.h>
int main()
{
    int i, fatorial = 0;
    int multiplicacao_fatorial = 1;
    
    printf("Digite o fatorial: \n");
    scanf("%d", &fatorial);
    
    for(i=1; i<=fatorial; i++){
        multiplicacao_fatorial = multiplicacao_fatorial * i;
    }
    
    printf("A multiplicação do fatorial é: %d ", multiplicacao_fatorial);
    
    return 0;
}
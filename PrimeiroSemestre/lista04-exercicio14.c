#include <stdio.h>
int main()
{
    int i, multiplicando = 0, multiplicador = 0;
    int soma_multiplicando = 0;
    
    printf("Informe o número do multiplicando: \n");
    scanf("%d", &multiplicando);
    
    printf("Informe o número do multiplicador: \n");
    scanf("%d", &multiplicador);
    
    for(i=1; i<=multiplicador; i++){
        soma_multiplicando = soma_multiplicando + multiplicando;
    }
    
    printf("A o resultado desta conta é: %d", soma_multiplicando);
    
    return 0;
}
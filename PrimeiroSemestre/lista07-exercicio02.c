#include <stdio.h>
int main()
{
    int i,num_repetido, num_usuario = 0, maior = 0, menor = 1000;
    
    printf("Digite o número de vezes que será repetido: \n");
    scanf("%d", &num_repetido);
    
    for(i=1; i<=num_repetido; i++){
        printf("Digite um número inteiro: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario > maior){
            maior = num_usuario;
        }
        if(num_usuario < menor){
            menor = num_usuario;
        }
    }
    
    printf("O maior número digitado é: %d\n", maior);
    printf("O menor número digitado é: %d\n", menor);
    
    return 0;
}
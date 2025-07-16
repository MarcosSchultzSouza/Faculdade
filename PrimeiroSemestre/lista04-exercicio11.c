#include <stdio.h>
int main()
{
    int i;
    
    int num_usuario = 0;
    int soma_num = 0;
    for(i=1; i<=15; i++){
        printf("Digite um numero que sera somado: \n");
        scanf("%d", &num_usuario);
        
        soma_num = soma_num + num_usuario;
    }
    
    printf("A soma total dos numeros digitados é: %d\n", soma_num);
    
    return 0;
}
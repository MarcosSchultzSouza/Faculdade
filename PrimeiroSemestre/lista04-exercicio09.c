#include <stdio.h> 
int main()
{
    int i, num_usuario;
    
    int soma_num = 0;
    for(i=1; i<=15; i++){
        printf("Digite um número: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario >= 10 && num_usuario <= 20){
            soma_num = soma_num + 1;
        }
    }
    
    printf("Você digitou %d numeros entre 10 e 20", soma_num);
    
    return 0;
}
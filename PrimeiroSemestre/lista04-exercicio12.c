#include <stdio.h>
int main()
{
    int i;
    
    int num_usuario = 0;
    int soma_par = 0;
    for(i=1; i<=15; i++){
        printf("Digite um número: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario %2 == 0){
            soma_par = soma_par + num_usuario;
        }
    }
    
    printf("A soma dos números pares é %d \n", soma_par);
    
    return 0;
}
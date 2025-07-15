#include <stdio.h>
int main()
{
    int i, num_vezes, num_usuario;
    
    printf("Informe o numero de vezes: \n");
    scanf("%d", &num_vezes);
    
    for(i=1; i<=num_vezes; i++){
        printf("Informe um numero:\n");
        scanf("%d", &num_usuario);
        if(num_usuario %2 != 0){
            printf("É um numero impar: %d \n", num_usuario);
        }
    }
    
    return 0;
}
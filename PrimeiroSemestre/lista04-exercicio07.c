#include <stdio.h>
int main()
{
    int num_usuario;
    
    for(;;){
        printf("Digite um numero:\n");
        scanf("%d", &num_usuario);
        if(num_usuario == 0){
            break;
        }
        if(num_usuario %2 == 0){
            printf("É um numero par: %d \n", num_usuario);
        }
    }
    
    return 0;
}

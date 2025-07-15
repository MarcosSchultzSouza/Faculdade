#include <stdio.h>
int main()
{
    int num_usuario, digito;
    
    printf("Informe um número: \n");
    scanf("%d", &num_usuario);
    
    while(num_usuario != 0){
        digito = num_usuario % 10;
        printf("%d ", digito);
        num_usuario = num_usuario / 10;
    }
    
    return 0;
}
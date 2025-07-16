#include <stdio.h>
int main()
{
    int num_usuario, digito, soma2 = 0;
    
    printf("Digite um número: \n");
    scanf("%d", &num_usuario);
    
    while(num_usuario != 0){
        digito = num_usuario % 10;
        if(digito == 2){
            soma2++;
        }
        num_usuario = num_usuario / 10;
    }
    
    printf("O número 2 aparece %d vezes", soma2);
    
    return 0;
}
#include <stdio.h>
int main()
{
    int num_usuario, digito, reverso =0, copia;
    
    printf("Informe um número: \n");
    scanf("%d", &num_usuario);
    
    copia = num_usuario;
    if(num_usuario < 100000000){
        while(num_usuario > 0){
            digito = num_usuario % 10;
            num_usuario = num_usuario / 10;
            
            reverso = reverso * 10 + digito;
        }
        if(copia == reverso){
            printf("É um número palindromo: \n");
        }
        //que significa que ele de tras para frente é igual tipo 888 ou 121
        else{
            printf("Não é um número palindromo: \n");
        }
    }
    else{
        printf("Digite um número menor de até 09 casas decimais e menor que 100000000: \n");
    }

    return 0;
}

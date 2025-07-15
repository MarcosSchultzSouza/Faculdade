#include <stdio.h>

int main()
{
    int num_usuario, digito, maior, menor, digito_anterior =10, guarda_numero =0;
    int muda_valor = 0;
    
    printf("Informe um número com no minimo dois algarismos: \n");
    scanf("%d", &num_usuario);
    
    if(num_usuario > 9){
        while(num_usuario != 0){
            digito = num_usuario % 10;
            num_usuario = num_usuario / 10;
            
            if(digito_anterior > digito){
                guarda_numero = guarda_numero * 10 + digito;
            }
            else{
                muda_valor = 1;
            }
            digito_anterior = digito;
        }
        if(muda_valor > 0){
            printf("Este  número não esta em ordem ascendente: %d \n", guarda_numero);
        }else{
            printf("Este número esta em ordem ascendente: %d \n", guarda_numero);
        }
    }else{
        printf("Informe um número maior que %d", num_usuario);
    }

    return 0;
}

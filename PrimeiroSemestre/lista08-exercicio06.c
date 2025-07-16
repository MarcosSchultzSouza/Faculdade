#include <stdio.h>
int main()
{
    int num_usuario, digito =0, soma_impar =0, guarda_num =0;
    
    printf("Informe um número com no maximo 9 casas decimais: \n");
    scanf("%d", &num_usuario);
    
    if(num_usuario < 999999999){
        for(;;){
            digito = num_usuario % 10;
            num_usuario = num_usuario / 10;
            if(digito % 2 == 0){
                guarda_num = guarda_num * 10 + digito;
            }
            if(num_usuario == 0){
                break;
            }
        }
        if(guarda_num > 0){
            printf("Os números resultantes são: %d \n", guarda_num);
        }
        if(guarda_num == 0){
            printf("Os digitos só contém números impares: \n");
        }
    }
    else{
        printf("O número contém mais de 9 digitos: \n");
    }

    return 0;
}
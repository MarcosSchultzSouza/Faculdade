#include <stdio.h>
int main()
{
    int v[6];
    int i, cont_par = 0, soma_par = 0, cont_impar = 0;
    
    for(i=0; i<6; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Os números pares são:\n");
    
    for(i=0; i<6; i++){
        if(v[i] % 2 == 0){
            cont_par++;
            printf("Número %d posição %d\n", v[i], i);
            soma_par = soma_par + v[i];
        }
    }
    
    if(cont_par == 0){
        printf("Não foi informado nenhum número par:\n");
    }
    
    if(cont_par > 0){
        printf("Soma dos pares = %d\n", soma_par);
    }
    
    printf("Os números impares são:\n");
    
    for(i=0; i<6; i++){
        if(v[i] % 2 != 0){
            cont_impar++;
            printf("Número %d posição %d\n", v[i], i);
        }
    }
    
    if(cont_impar == 0){
        printf("Não foi informado nenhum número impar:\n");
    }
    
    if(cont_impar > 0){
        printf("Quantidade de impares = %d", cont_impar);
    }
    
    return 0;
}

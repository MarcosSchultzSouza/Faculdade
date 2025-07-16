#include <stdio.h>
int main()
{
    int i;
    
    int num_usuario = 0;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    for(i=1; i<=15; i++){
        printf("Informe um número: \n");
        scanf("%d", &num_usuario);
        
        if(num_usuario >= 0 && num_usuario <= 25){
            soma1 = soma1 + 1;
        }else if(num_usuario > 25 && num_usuario <= 50){
            soma2 = soma2 + 1;
        }else if(num_usuario > 50 && num_usuario <= 75){
            soma3 = soma3 + 1;
        }else if(num_usuario > 75 && num_usuario <= 100){
            soma4 = soma4 + 1;
        }
    }
    
    printf("Foram informados %d valores no intervalo [0,25]. \n", soma1);
    printf("Foram informados %d valores no intervalo [25,50]. \n", soma2);
    printf("Foram informados %d valores no intervalo [50,75]. \n", soma3);
    printf("Foram informados %d valores no intervalo [75,100]. \n", soma4);
    
    
    return 0;
}
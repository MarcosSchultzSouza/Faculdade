#include <stdio.h>
int main()
{
    int i, j = 0, num_usuario = 0, ultimo_num = 0;
    int resultado = 0;
    
    printf("Informe o primeiro número para a tabuada: \n");
    scanf("%d", &num_usuario);
    
    printf("Informe o ultimo número para fazer a tabuada \n");
    scanf("%d", &ultimo_num);
    
    for(i=num_usuario; i<=ultimo_num; i++){
        
        printf("\nTabuada do %d \n\n",num_usuario);
        
        for(j=1; j<=10; j++){
            resultado = 0;
            resultado = num_usuario * j;
            printf("%d X %d = %d \n",num_usuario, j, resultado);
        }
        
        num_usuario = num_usuario + 1;
    }
    
    return 0;
}
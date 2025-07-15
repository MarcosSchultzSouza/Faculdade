#include <stdio.h>
int main()
{
    int num, digito, e_repetido = 0;
    
    printf("Digite um número: \n");
    scanf("%d", &num);
    
    while(num != 0){
        digito = num % 10;
        num = num / 10;
        
        int num2 = num;
        
        while(num2 != 0){
            int digito2 = num2 % 10;
            num2 = num2 / 10;
            
            if(digito2 == digito){
                e_repetido = 1;{
                    break;
                }
            }
        }
    }
    if(e_repetido == 1){
        printf("O número contém digitos repetidos:\n");
    }
    else{
        printf("O número não contém digitos repetidos:\n");
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int num, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0;
    int num8 = 0, num9 = 0, digito = 0, i;
    
    printf("Informe um número com no maximo 5 casas decimais: \n");
    scanf("%d", &num);
    
    if(num > 0 &&  num < 99999){
        while(num != 0){
            digito = num % 10;
            num = num / 10;
            
            if(digito == 1){
                num1++;
            }
            if(digito == 2){
                num2++;
            }
            if(digito == 3){
                num3++;
            }
            if(digito == 4){
                num4++;
            }
            if(digito == 5){
                num5++;
            }
            if(digito == 6){
                num6++;
            }
            if(digito == 7){
                num7++;
            }
            if(digito == 8){
                num8++;
            }
            if(digito == 9){
                num9++;
            }
        }
        if(num1 > 0){
            printf("O número 1 aparece %d vezes \n", num1);
        }
        if(num2 > 0){
            printf("O número 2 aparece %d vezes \n", num2);
        }
        if(num3 > 0){
            printf("O número 3 aparece %d vezes \n", num3);
        }
        if(num4 > 0){
            printf("O número 4 aparece %d vezes \n", num4);
        }
        if(num5 > 0){
            printf("O número 5 aparece %d vezes \n", num5);
        }
        if(num6 > 0){
            printf("O número 6 aparece %d vezes \n", num6);
        }
        if(num7 > 0){
            printf("O número 7 aparece %d vezes \n", num7);
        }
        if(num8 > 0){
            printf("O número 8 aparece %d vezes \n", num8);
        }
        if(num9 > 0){
            printf("O número 9 aparece %d vezes \n", num9);
        }
    }
    else{
        printf("Digite um número menor que 99999 \n");
    }
    
    
    return 0;
}
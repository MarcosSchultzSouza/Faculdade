#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5;
    
    printf("Digite cinco numeros inteiros com valores entre (1 a 6): \n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    if(num1 == num2 && num2 == num3 && num3 == num4 && num4 == num5){
        printf("Os 5 numeros são iguais: %d, %d, %d, %d, %d. \n", num1, num2, num3, num4, num5);
    }
    else if((num1 != num2 && num2 == num3 && num3 == num4 && num4 == num5)||
        (num1 == num2 && num2 != num3 && num3 == num4 && num4 == num5 ) ||
        (num1 == num2 && num2 == num3 && num3 != num4 && num3 == num5) ||
        (num1 == num2 && num2 == num3 && num3 == num4 && num4 != num5 )){
        printf("A quatro numeros iguais e um diferente: %d, %d, %d, %d, %d",
        num1, num2, num3, num4, num5);
    }
    else if(num1 +1 == num2 && num2 +1 == num3 && num3 +1 == num4 && num4 +1 == num5){
        printf("Voce tem uma sequencia: %d, %d, %d, %d, %d",num1, num2, num3,
        num4, num5);
    }
    else if((num1 == num2 && num2 == num3 && num4 == num5) || (num1 == num2 && num3 == num4 && num4 == num5)){
        printf("Os valores formam um full-hand:");
    }
    
    else{
        printf("Nenhuma das combinações acima ");
    }
    
    return 0;
}
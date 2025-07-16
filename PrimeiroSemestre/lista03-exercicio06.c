#include <stdio.h>
int main()
{
    int n1, n2, n3, n4;
    
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &n3);
    
    printf("Digite o quarto numero inteiro: \n");
    scanf("%d", &n4);
    
    if(n1 < n2 && n1 < n3 && n1 < n4){
        if(n2 < n3 && n2 < n4){
            if(n3 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n2,n3);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n2,n4);
            }
        }
        if(n3 < n2 && n3 < n4){
            if(n2 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n3,n2);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n3,n4);
            }
        }
        if(n4 < n2 && n4 < n3){
            if(n2 < n3){
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n4,n2);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n1, n4,n3);
            }
        }
    }
    
    else if(n2 < n1 && n2 < n3 && n2 < n4){
        if(n1 < n3 && n1 < n4){
            if(n3 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n1,n3);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n1,n4);
            }
        }
        if(n3 < n1 && n3 < n4){
            if(n1 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n3,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n3,n4);
            }
        }
        if(n4 < n1 && n4 < n3){
            if(n1 < n3){
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n4,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n2, n4,n3);
            }
        }
    }
    
    else if(n3 < n1 && n3 < n2 && n3 < n4){
        if(n1 < n2 && n1 < n4){
            if(n2 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n1,n2);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n1,n4);
            }
        }
        if(n2 < n1 && n2 < n4){
            if(n1 < n4){
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n2,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n2,n4);
            }
        }
        if(n4 < n1 && n4 < n2){
            if(n1 < n3){
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n4,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n3, n4,n3);
            }
        }
    }
    
    else if(n4 < n1 && n4 < n2 && n4 < n3){
        if(n1 < n2 && n1 < n3){
            if(n2 < n3){
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n1,n2);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n1,n3);
            }
        }
        if(n2 < n1 && n2 < n3){
            if(n1 < n3){
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n2,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n2,n3);
            }
        }
        if(n3 < n1 && n3 < n2){
            if(n1 < n2){
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n3,n1);
            }
            else{
                printf("Os valores em ordem crescente é: %d, %d, %d", n4, n3,n2);
            }
        }
    }
    
    else{
        printf("voce digitou dois valores iguais:");
    }
    
    return 0;
}
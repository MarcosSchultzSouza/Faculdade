#include <stdio.h>
int main()
{
    int i;
    float a, b, c;
    
    printf("Digite quatro valores (i, a, b, c): \n");
    scanf("%d %f %f %f", &i, &a, &b, &c);
    
    if(i == 1 && a < b && a < c){
        if(b < c){
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", a, b, c);
        }
        else{
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", a, b, c);
        }
    }
    else if (i == 1 && b < a && b < c){
        if(a < c){
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", b, a, c);
        }
        else{
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", b, c, a);
        }
    }
    else if (i == 1 && c < a && c < b){
        if(a < b){
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", c, a, b);
        }
        else{
            printf("Os valores em ordem crescente: %.2f, %.2f, %.2f", c, b, a);
        }
    }
    else if (i == 2 && a > b && a > c){
        if(b > c){
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", a, b, c);
        }
        else{
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", a, c, b);
        }
    }
    else if (i == 2 && b > a && b > c){
        if(a > c){
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", b, a, c);
        }
        else{
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", b, c, a);
        }
    }
    else if (i == 2 && c > a && c > b){
        if(a > b){
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", c, a, b);
        }
        else{
            printf("Os valores em ordem decrescente: %.2f, %.2f, %.2f", c, b, a);
        }
    }
    else if (i == 3 && a > b && a >c){
        if(b > c){
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", b, a, c);
        }
        else{
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", c, a, b);
        }
    }
    else if (i == 3 && b > a && b > c){
        if(a > c){
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", a, b, c);
        }
        else{
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", c, b, a);
        }
    }
    else if (i == 3 && c > a && c > b){
        if(a > b){
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", a, c, b);
        }
        else{
            printf("O maior valor entre os outros: %.2f, %.2f, %.2f", b, c, a);
        }
    }
    else{
        printf("Voce não digitou nenhum numero de (1 a 3)");
    }
    
    return 0;
}
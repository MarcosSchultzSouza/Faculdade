#include <stdio.h>
int main()
{
    int n1, n2, n3;
    
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d", &n3);
    
    if(n1 < n2 && n1 < n3){
        printf("O menor numero e: %d", n1);
    }
    else if(n2 < n1 && n2 < n3){
        printf("O menor numero e: %d", n2);
    }
    else if(n3 < n1 && n3 < n2){
        printf("O menor numero e: %d", n3);
    }
    
    return 0;
}
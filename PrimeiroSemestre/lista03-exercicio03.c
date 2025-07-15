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
        if(n2 < n3){
            printf("A sequencia e: %d %d %d", n1, n2, n3);
        }
        else{
            printf("A sequencia e: %d %d %d", n1, n3, n2);
        }
    }
    if(n2 < n1 && n2 < n3){
        if(n1 < n3){
            printf("A sequencia e: %d %d %d", n2, n1, n3);
        }
        else{
            printf("A sequencia e: %d %d %d", n2, n3, n1);
        }
    }
    if(n3 < n1 && n3 < n2){
        if(n1 < n2){
            printf("A sequencia e: %d %d %d", n3, n1, n2);
        }
        else{
            printf("A sequencia e: %d %d %d", n3, n2, n1);
        }
    }

    
    return 0;
}

#include <stdio.h>
int main()
{
    int i,n1,n2, menor,mdc = 0;
    
    printf("Digite um numero: \n");
    scanf("%d",&n1);
    
    printf("Digite um numero: \n");
    scanf("%d",&n2);
    
    menor = n1;
    if(menor > n2){
        menor = n2;
    }
    
    for(i=1; i<=menor; i++){
        
        if(n1 % i == 0){
            if(n2 % i == 0){
                mdc = i;
            }
        }
    }
    printf("O MDC é %d", mdc);
    
    return 0;   
}
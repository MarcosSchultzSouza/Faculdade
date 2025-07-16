#include <stdio.h>
int main()
{
    int i, num;
    
    for(i=1; i<=10; i++){
        printf("Digite um numero: \n");
        scanf("%d", &num);
        if(num %2 == 0){
            printf("É um numero par: %d \n", num);
        }
    }
    
    return 0;
}
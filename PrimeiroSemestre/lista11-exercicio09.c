#include <stdio.h>
int main()
{
    int v[10];
    int i;
    
    while(i < 10){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
        
        if(v[i] >= 0){
            i++;
        }else{
            printf("Digite um número positivo: \n");
        }
    }
    
    for(i=9; i>=0; i--){
        printf(" = %d", v[i]);
    }
    
    return 0;
}

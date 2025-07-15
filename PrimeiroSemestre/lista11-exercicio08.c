#include <stdio.h>
int main()
{
    int v[20];
    int i = 0;
    
    while(i < 20){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        if(v[i] % 2 != 0){
            i++;
        }
        else{
            printf("Digite um número impar!!!\n");
        }
    }
    
    for(i=0; i<20; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}

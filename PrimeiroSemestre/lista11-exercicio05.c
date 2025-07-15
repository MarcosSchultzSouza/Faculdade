#include <stdio.h>
int main()
{
    int v[25];
    int i = 0, j, ja_foi = 0, cont = 0;
    
    while(i <25){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        if(v[i] >= 0 && v[i] <= 10){
            i++;
        }else{
            printf("Digite um número válido:\n");
        }
    }
    
    for(i=0; i<11; i++){
        ja_foi = 0;
        cont = 0;
        
        printf(" %d ", i);
        
        for(j=0; j<25; j++){
            if(v[j] == i){
                cont++;
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}
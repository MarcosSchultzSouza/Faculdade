#include <stdio.h>
int main()
{
    int v[20];
    int i, j = 0, cont2 = 20;
    
    for(i=0; i<20; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Antes da troca!!!\n");
    
    for(i=0; i<20; i++){
        printf(" %d ", v[i]);
    }
    
    printf("\n\nDepois da troca!!!\n");
    
    while(j < cont2){
        if(v[j] < 0){
            for(i=j; i<cont2-1; i++){
                v[i] = v[i+1];
            }
            cont2--;
        }
        else{
            j++;
        }
    }
    
    for(i=0; i<cont2; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}
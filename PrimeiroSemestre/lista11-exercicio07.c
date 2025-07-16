#include <stdio.h>
int main()
{
    int v[100];
    int i = 0, cont = 0, j, cont2 = 0;
    
    while(i < 100){
        printf("Digite um número: \n");
        scanf("%d", &v[i]);
        
        if(v[i] == 0){
            break;
        }
        
        if(v[i] >= 0 && v[i] <=10){
            i++;
            cont++;
        }else{
            printf("Digite um número válido: \n");
        }
    }
    
    for(i=1; i<11; i++){
        cont2 = 0;
        for(j=0; j<cont; j++){
            if(v[j] == i){
                cont2++;
            }
        }
        if(cont2 == 0){
            printf("O número %d não aparece nenhuma vez:\n", i);
        }
    }
    
    return 0;
}
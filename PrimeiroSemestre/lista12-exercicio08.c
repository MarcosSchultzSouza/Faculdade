#include <stdio.h>
int main()
{
    int v[20];
    int i = 0, cont = 0, outro_num = 0, l = 0, k = 0;
    
    while(i < 20){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        if(v[i] == 0){
            break;
        }
        if(v[i] > 0){
            i++;
        }else{
            printf("Digite um número positivo: \n");
        }
        cont++;
    }
    
    printf("Números digitados!!!\n");
    
    for(i=0; i<cont; i++){
        printf(" %d", v[i]);
    }
    
    while(k < 1){
        printf("\nDigite outro número positivo: \n");
        scanf("%d", &outro_num);
        
        if(outro_num > 0){
            k++;
        }else{
            printf("Digite um número válido:\n");
        }
    }
    
    while(l < cont){
        if(v[l] == outro_num){
            for(i=l; i<cont-1; i++){
                v[i] = v[i+1];
            }
            cont--;
        }else{
            l++;
        }
    }
    
    printf("Depois da troca!!!\n");
    
    for(i=0; i<cont; i++){
        printf(" %d", v[i]);
    }
    
    return 0;
}
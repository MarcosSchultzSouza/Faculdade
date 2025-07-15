#include <stdio.h>
int main()
{
    int v[1000];
    int i = 0, cont = 0, ja_foi = 0, j, k, cont2 = 0;
    
    while(i < 1000){
        printf("Digite um número de (1 a 10)\n");
        scanf("%d", &v[i]);
        
        if(v[i] < 0){
            break;
        }
        if(v[i] >= 0 &&  v[i] <= 10){
            cont++;
            i++;
        }
        else{
            printf("Digite um número entre (1 e 10)\n");
        }
    }
    
    for(i=0; i<=10; i++){
        cont2 = 0;
        for(j=0; j<cont; j++){
            if(v[j] == i){
                cont2++;
            }
        }
        if(cont2 > 0){
            printf("Nota %d: %d ocorrencia(s)\n", i, cont2);
        }
    }
    
    return 0;
}

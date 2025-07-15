#include <stdio.h>
int main()
{
    int v[10];
    int i, j, k, ja_foi = 0, cont = 0;
    
    while(i < 10){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        if(v[i] >= 1 && v[i] <= 10){
            i++;
        }
        else{
            printf("Digite um número no intervalo de (1 a 10)\n");
        }
    }
    
    for(i=0; i<10; i++){
        ja_foi = 0;
        for(j=0; j<i; j++){
            if(v[i] == v[j]){
                ja_foi = 1;
                break;
            }
        }
        cont = 0;
        if(ja_foi == 0){
            for(k=0; k<10; k++){
                if(v[i] == v[k]){
                    cont++;
                }
            }
        }
        if(cont > 0){
            printf("O número %d se repete %d vezes:\n", v[i], cont);
        }
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int v[10];
    int i, j, k, ja_foi = 0, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
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
            printf("O número %d se repete %d vezes.\n", v[i], cont);
        }
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int v[10];
    int i, j, ja_foi = 0, k, cont = 0, mais_vezes = -100, mais_se_repete = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número:\n");
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
        if(cont > mais_vezes){
            mais_vezes = cont;
            mais_se_repete = v[i];
        }
    }
    printf("O elemento %d se repetio %d vezes no vetor:\n", mais_se_repete, mais_vezes);

    
    return 0;
}

#include <stdio.h>
int main()
{
    int v1[10], v2[10], v3[20], v4[20], cont2 = 0;
    int i, cont = 0, repetido = 0, j, repete = 0, ja_foi = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v1[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v2[i]);
    }
    
    for(i=0; i<10; i++){
        repete = 0;
        for(j=0; j<10; j++){
            if(v1[i] == v2[j]){
                repete = 1;
                break;
            }
        }
        if(repete == 1){
            v3[cont] = v1[i];
            cont++;
        }
    }
    
    for(i=0; i<cont; i++){
        repetido = 0;
        for(j=0; j<i; j++){
            if(v3[i] == v3[j]){
                repetido = 1;
                break;
            }
        }
        if(repetido == 0){
            v4[cont2] = v3[i];
            cont2++;
        }
    }
    
    for(i=0; i<cont2; i++){
        printf(" %d ", v4[i]);
    }
    
    return 0;
}

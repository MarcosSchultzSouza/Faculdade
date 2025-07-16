#include <stdio.h>
int main()
{
    int v[20];
    int i, j, aux = 0;
    
    for(i=0; i<20; i++){
        printf("Digite um número (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<20; i++){
        for(j=0; j<19; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    
    printf("Vetor ordenado!!!\n");
    
    for(i=0; i<20; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}

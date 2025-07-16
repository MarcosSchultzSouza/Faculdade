#include <stdio.h>
int main()
{
    int v[10];
    int i, j, aux;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Números em ordem normal!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v[i]);
    }
    
    for(i=0; i<10; i++){
        for(j=0; j<9; j++){
            if(v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    printf("\n\nNúmeros em ordem crescente!!!\n");
    
    for(i=0; i<10; i++){
        printf(" %d ", v[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int v[10], v2[10], v3[20];
    int i, cont = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v2[i]);
    }
    
    for(i=0; i<10; i++){
        v3[cont] = v[i];
        cont++;
        v3[cont] = v2[i];
        cont++;
    }
    
    printf("Vetor completo!!!\n");
    
    for(i=0; i<20; i++){
        printf(" %d", v3[i]);
    }
    
    return 0;
}
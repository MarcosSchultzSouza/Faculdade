#include <stdio.h>
int main()
{
    int v[10];
    int i = 0, j, cont = 0, k, aux;
    
    while(i < 10){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
        
        cont = 0;
        for(j=0; j<=i; j++){
            if(v[i] == v[j]){
                cont++;
            }
        }
        printf("O número %d aparece %d vezes\n", v[i], cont);
        
        printf("Em ordem crescente!!!\n");
        
        for(j=0; j<=i; j++){
            for(k=0; k<=i-1; k++){
                if(v[k] > v[k+1]){
                    aux = v[k];
                    v[k] = v[k+1];
                    v[k+1] = aux;
                }
            }
        }
        for(j=0; j<=i; j++){
            printf(" %d ", v[j]);
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
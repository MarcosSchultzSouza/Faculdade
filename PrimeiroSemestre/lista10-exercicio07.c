#include <stdio.h>
int main()
{
    int v[10];
    int cont, soma = 0;
    
    for(cont=0; cont<10; cont++){
        printf("Digite um número: (%d)\n", cont+1);
        scanf("%d", &v[cont]);
    }
    
    printf("Vetor digitado:\n");
    
    for(cont=0; cont<10; cont++){
        printf(" %d ", v[cont]);
        if(v[cont] < 0){
            soma++;
        }
    }
    
    printf("\n\nForam informados %d números negativos:\n", soma);
    
    return 0;
}

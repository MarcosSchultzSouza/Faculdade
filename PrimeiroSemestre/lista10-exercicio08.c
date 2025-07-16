#include <stdio.h>
int main()
{
    int v[10];
    int i, ehprimo = 0, j;
    int cont_primo = 0;
    
    for(i=0; i<10; i++){
        printf("Digite um número: (%d)\n", i+1);
        scanf("%d", &v[i]);
    }
    
    printf("Números primos:\n");
    
    for(i=0; i<10; i++){
        ehprimo = 0;
        for(j=2; j<v[i]/2; j++){
            if(v[i] % j == 0){
                ehprimo = 1;
            }
        }
        if(ehprimo == 0){
            printf(" %d ", v[i]);
            cont_primo++;
        }
    }
    
    printf("\nForam informados %d números primos:", cont_primo);
    
    return 0;
}

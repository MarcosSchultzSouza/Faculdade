#include <stdio.h>
int main()
{
    int i;
    
    printf("Mostrar os impares de 1 a 200 \n");
    
    for(i=1; i<=200; i++){
        if(i %2 != 0){
            printf("Impar: %d \n", i);
        }
    }
    
    return 0;
}
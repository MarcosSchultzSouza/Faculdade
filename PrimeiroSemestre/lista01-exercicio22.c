#include <stdio.h>
int main() 
{
    int minutos;
    int minutos_em_horas;
    
    printf("Digite um tempo em minutos que eu converterei em horas: \n");
    scanf("%d", &minutos);
    
    minutos_em_horas = minutos /60;
    
    printf("O tempo convertido ficou %d horas\n", minutos_em_horas);
    
    return 0;
}

#include <stdio.h>
int main()
{
    int horas;
    int minutos = 60;
    int horas_em_minutos;
    
    printf("Digite um tempo em horas \n");
    scanf("%d", &horas);
    
    horas_em_minutos = horas * minutos;
    
    printf("O resultado foi de %d minutos.\n", horas_em_minutos);
    
    return 0;
}

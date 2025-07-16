#include <stdio.h>
int main()
{
    int ano, i,j,dias;
    printf("digite o ano:\n");
    scanf("%d",&ano);
    
    for(i=1; i<=12; i++){
        printf("%d/%d\n",i,ano);
        
        dias = 0;
        if(i ==1 || i ==3 || i == 5 || i ==  7 || i ==8 || i == 10 || i == 12){
            dias = 31;
        }
        else if(i ==4 || i == 6 || i == 9 || i==11){
            dias =30;
        }
        else if(i == 2 && (ano % 4 == 0)){
            dias = 29;
        }else{
            dias = 28;
        }
        
        
        for(j=1; j<=dias; j++){
            printf("%02d ",j);
            if(j  == 7 || j == 14 || j == 21 || j == 28){
                printf("\n");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int i;
    
    for(i=1; i<=50; i++){
        if(i %2 == 0){
            printf(" par %d \n",i);
        }
    }
    
    return 0;
}
#include <stdio.h>

int main()
{
	int num_usuario, digito,achou, i;

	printf("Informe um numero qualquer: \n");
	scanf("%d", &num_usuario);
	
	int temp;
	for(i=0; i< 10; i++) { temp = num_usuario;
		while(temp > 0) {
			digito = temp % 10;
			temp = temp / 10;
			if(digito == i)
			{
                printf("%d", digito);
			}
		}
	}
		return 0;
	}
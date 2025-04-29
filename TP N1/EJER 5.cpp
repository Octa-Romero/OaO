#include <stdio.h>

int num,i,cont_prim=0;

main()
{
	printf("Ingresar un numero \n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num % i == 0)
		{
			printf("El numero no es primo \n");
			cont_prim=cont_prim+1;
			break;
		}
	}
	if(num % 1 == 0 && num % num == 0 && cont_prim==0)
	{
		printf("El numero es primo \n");
	}
}

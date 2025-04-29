#include <stdio.h>

int num,i,prim=0,noPrim=0,cont=0,contNum=0;

main()
{
	printf("Ingresar un numero \n");
	scanf("%d",&num);
	while(num!=0){
	for(i=2;i<num;i++)
	{
		if(num % i == 0)
		{
			noPrim=noPrim+1;
			cont=cont+1;
			break;
		}
		cont=0;
	}
	if(num % 1 == 0 && num % num == 0 && cont==0)
	{
		prim=prim+1;
	}
	contNum=contNum+1;
	printf("Ingresar un numero \n");
	scanf("%d",&num);
}
	printf("La cantidad de numeros ingresados son %d \n",contNum);
	printf("La cantidad de numeros primos son %d \n",prim);
	printf("La cantidad de numero no primos son %d \n",noPrim);
}

#include <stdio.h>

int num,i,par=0,impar=0,contNum=0;

main()
{
	printf("Ingresar un numero \n");
	scanf("%d",&num);
	while(num!=0){
	if(num % 2 ==0)
	{
		par=par+1;
	}else
	if(num % 2 > 0)
	{
		impar=impar+1;
	}
	contNum=contNum+1;
	printf("Ingresar un numero \n");
	scanf("%d",&num);
}
	printf("La cantidad de numeros ingresados son %d \n",contNum);
	printf("La cantidad de numeros pares son %d \n",par);
	printf("La cantidad de numero impares son %d \n",impar);
}

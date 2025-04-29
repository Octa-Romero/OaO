#include <stdio.h>
#include <math.h>

float cat1,cat2,hipo;
int opcion;

main()
{
	printf("Ingrese que lado quiere calcular en un triangulo rectangulo (1=cateto 1,2=cateto 2,3= hipotenusa) \n");
	scanf("%d",&opcion);
	while(opcion==0 || opcion>3)
	{
		printf("_ERROR opcion no valida,porfavor ingrese una opcion correcta \n");
		printf("Ingrese que lado quiere calcular en un triangulo rectangulo (1=cateto 1,2=cateto 2,3= hipotenusa) \n");
		scanf("%d",&opcion);
	}
	if(opcion==1)
	{
		printf("Ingrese el valor del cateto 2 \n");
		scanf("%f",& cat2);
		printf("Ingrese el valor de la hipotenusa \n");
		scanf("%f",& hipo);
		while(cat2>hipo)
		{
			printf("ERROR_ cateto 2 no puede ser mayor que hipotenusa,porfavor ingrese los valores de nuevo \n");
			printf("Ingrese el valor del cateto 2 \n");
			scanf("%f",& cat2);
			printf("Ingrese el valor de la hipotenusa \n");
			scanf("%f",& hipo);
		}
		cat1=sqrt(hipo*hipo - cat2*cat2);
		printf("El valor del cateto 1 es %f \n",cat1);
	}
	if(opcion==2)
	{
		printf("Ingrese el valor del cateto 1 \n");
		scanf("%f",& cat1);
		printf("Ingrese el valor de la hipotenusa \n");
		scanf("%f",& hipo);
		while(cat1>hipo)
		{
			printf("ERROR_ cateto 1 no puede ser mayor que hipotenusa,porfavor ingrese los valores de nuevo \n");
			printf("Ingrese el valor del cateto 1 \n");
			scanf("%f",& cat1);
			printf("Ingrese el valor de la hipotenusa \n");
			scanf("%f",& hipo);
		}
		cat2=sqrt(hipo*hipo - cat1*cat1);
		printf("El valor del cateto 2 es %f \n",cat2);
	}
	if(opcion==3)
	{
		printf("Ingrese el valor del cateto 1 \n");
		scanf("%f",&cat1);
		printf("Ingrese el valor del cateto 2 \n");
		scanf("%f",&cat2);
		hipo=sqrt(cat1*cat1 + cat2*cat2);
		printf("El valor de la hipotenusa es %f \n",hipo);
	}
	printf("\Del triangulo rectangulo se sabe que:\n	\nCateto 1=%f\n	\nCateto 2=%f\n	\nHipotenusa=%f",cat1,cat2,hipo);
}

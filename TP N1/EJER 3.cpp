#include <stdio.h>
#include <math.h>

float cat1,cat2,hipo;

main()
{
	printf("Ingrese el valor del cateto 1 \n");
	scanf("%f",&cat1);
	printf("Ingrese el valor del cateto 2  \n");
	scanf("%f",&cat2);
	hipo=sqrt(cat1*cat1 + cat2*cat2);
	printf("El valor de la hipotenusa es %f \n",hipo);
}

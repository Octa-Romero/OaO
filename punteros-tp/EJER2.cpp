#include <stdio.h>

float acum=0,promRes=0;
int i=0,tam,sumRes=0;


float suma(int nums[],int tam,int *sumValores)
{
	for(i=0;i<tam;i++)
	{
		*sumValores=*sumValores + nums[i];
	}
}

float promedio(int nums[], int tam, float *promValores)
{
	for(i=0;i<tam;i++)
	{
		acum=acum+nums[i];
	}
	*promValores=acum/tam;
}



int main()
{
	printf("Ingrese el tamanio del arreglo \n");
	scanf("%d",&tam);
	int nums[tam];
	for(i=0;i<tam;i++)
	{
		printf("Ingrese el valor %d del arreglo \n",i+1);
		scanf("%d",& nums[i]);
	}
	suma(nums,tam,&sumRes);
	promedio(nums,tam,&promRes);
	printf("El valor de la suma de todos los valores del arreglo es: %d \n",sumRes);
	printf("El valor del promedio de todos los valores del arreglo es: %f \n",promRes);
}
 


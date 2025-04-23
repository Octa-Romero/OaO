#include <stdio.h>

int i=0,tam;

void copiarArreglo(int *arr1,int *arr2, int tam)
{
	for(i=0;i<tam;i++)
	{
		arr2[i]=arr1[i];
	}
}


void mostrarCopia(int *arr2, int tam)
{
	printf("\n\nVECTOR 2:");
	for(i=0;i<tam;i++)
	{
		printf("|%d|",arr2[i]);
	}
}


int main()
{
	printf("Ingrese el tamanio del arreglo 1 \n");
	scanf("%d",&tam);
	int arreglo1[tam];
	int arreglo2[tam];
	for(i=0;i<tam;i++)
	{
		printf("Ingrese el valor %d del arreglo 1\n",i+1);
		scanf("%d",&arreglo1[i]);
	}
	
	copiarArreglo(arreglo1,arreglo2,tam);
	printf("El resultado de la copia es:\n");
	printf("VECTOR 1:");
	for(i=0;i<tam;i++)
	{
		printf("|%d|",arreglo1[i]);
	}
	
	mostrarCopia(arreglo2,tam);
}

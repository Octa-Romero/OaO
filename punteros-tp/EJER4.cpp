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
	printf("El resultado de la copia es:\n");
	for(i=0;i<tam;i++)
	{
		printf("Valor %d del arreglo 2 : %d\n",i+1,arr2[i]);
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
	
	mostrarCopia(arreglo2,tam);
}

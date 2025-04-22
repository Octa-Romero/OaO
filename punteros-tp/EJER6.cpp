#include <stdio.h>
#include <string.h>

int i=0,cont=0,tam,busqueda,res;


int encontrarElem(int *objeto, int busqueda, int tam)
{
	for(i=0;i<tam;i++)
	{
		if(busqueda==objeto[i])
		{
			cont++;
		}
	}
	return cont;
}


void mostrarResultado(int busqueda, int *res)
{
	if(*res==1)
	{
		printf("El elemento %d se encuentra %d vez en total dentro del arreglo\n",busqueda,*res);
	}else if(*res>1)
	{
		printf("El elemento %d se encuentra %d veces en total dentro del arreglo\n",busqueda,*res);
	}else if(*res==0)
	{
		printf("El elemento %d no se encuentra dentro del arreglo\n",busqueda);
	}
}


int main()
{
	printf("Ingrese el tamanio del arreglo\n");
	scanf("%d",&tam);
	int arr[tam];
	for(i=0;i<tam;i++)
	{
		printf("Ingrese el elemento %d del arreglo\n",i+1);
		scanf("%d",&arr[i]);		
	}		
	printf("Ingrese el elemento que desea buscar dentro del arreglo\n");
	scanf("%d",&busqueda);
	
	res=encontrarElem(arr,busqueda,tam);
	
	mostrarResultado(busqueda,&res);
	
}


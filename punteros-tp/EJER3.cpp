#include <stdio.h>

int i=0,tam,min,max;

void menor(int nums[], int tam, int *valorMen)
{
	for(i=0;i<tam;i++)
	{
		if(i==0 || nums[i]<*valorMen)
		{
			*valorMen=nums[i];
		}
	}
}

void mayor(int nums[], int tam, int *valorMax)
{
	for(i=0;i<tam;i++)
	{
		if(i==0 || nums[i]>*valorMax)
		{
			*valorMax=nums[i];
		}
	}
}



int main()
{
	printf("Ingrese cuantos valores desea ingresar en el arreglo \n");
	scanf("%d",&tam);
	int nums[tam];
	for(i=0;i<tam;i++)
	{
		printf("Ingrese el valor %d del arreglo \n",i+1);
		scanf("%d",&nums[i]);
	}
	menor(nums,tam,&min);
	mayor(nums,tam,&max);
	printf("El minimo elemento del arreglo es %d\n",min);
	printf("El mayor elemento del arreglo es %d\n",max);
	
}

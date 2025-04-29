#include <stdio.h>

int n,i=0,j,k,prim=0,cont1=0,cont2=0,cont3=0,contNum=0,aux;

main()
{
	printf("Ingrese cuantos valores quiere ingresar \n");
	scanf("%d",& n);
	int num[n];
	int numPrim[n];
	int numImpar[n];
	int numPar[n];
for(i=0;i<n;i++)
	{
	printf("Ingrese un numero \n");
	scanf("%d",& num[i]);
	}
for(i=0;i<n;i++){
	int prim=1;
	for(k=2;k<num[i];k++)
	{
		if(num[i] % k == 0)
		{
			prim=0;
			break;
		}
	}
	if(prim==1)
	{
		 numPrim[cont1]=num[i];
		 cont1=cont1+1;
	}
}

for(i=0;i<n;i++){
	int impar=0;
	int par=0;
		if(num[i] % 2 == 0)
		{
			par=1;
		}else if(num[i] % 2 ==1)
		{
			impar=1;
		}
	if(impar==1)
	{
		 numImpar[cont2]=num[i];
		 cont2=cont2+1;
	}
	if(par==1)
	{
		numPar[cont3]=num[i];
		cont3=cont3+1;
	}
}
for(j=1;j<cont1;j++)
	{
		for(i=0;i<cont1-j;i++)
		{
			if(numPrim[i]>numPrim[i+1])
			{
				aux=numPrim[i];
				numPrim[i]=numPrim[i+1];
				numPrim[i+1]=aux;
			}
		}
	}

for(j=1;j<cont2;j++)
	{
		for(i=0;i<cont2-j;i++)
		{
			if(numImpar[i]<numImpar[i+1])
			{
				aux=numImpar[i];
				numImpar[i]=numImpar[i+1];
				numImpar[i+1]=aux;
			}
		}
	}
	
for(j=1;j<cont3;j++)
	{
		for(i=0;i<cont3-j;i++)
		{
			if(numPar[i]>numPar[i+1])
			{
				aux=numPar[i];
				numPar[i]=numPar[i+1];
				numPar[i+1]=aux;
			}
		}
	}
	
	printf("\nEl vector con los numeros primos ordenados de menor a mayor es: \n");
for(i=0;i<cont1;i++)
	{
		printf("|%d|",numPrim[i]);
	}

	printf("\nEl vector con los numeros impares ordenados de mayor a menor es: \n");
for(i=0;i<cont2;i++)
	{
		printf("|%d|",numImpar[i]);
	}

	printf("\nEl vector con los numeros pares ordenados de menor a mayor es: \n");
for(i=0;i<cont3;i++)
	{
		printf("|%d|",numPar[i]);
	}
}

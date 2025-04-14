#include <stdio.h>
#include <string.h>
#include <ctype.h>

char cadena[9999];

int i,j,opcion,cont=1;

main()
{
	printf("Ingrese una oracion \n");
	fgets(cadena,sizeof(cadena),stdin);
	printf("Ingrese una accion a realizar:\n1) Mostrar la oracion toda en mayuscula\n2) Mostrar la oracion todo en minusculas\n3) Mostrar la oracion alternando una mayuscula y una minuscula\n4) Mostrar la oracion comenzando todas las palabras con mayuscula\n");
	scanf("%d",&opcion);
	int longitud=strlen(cadena);
	for(i=0;i<strlen(cadena);i++)
	{
		if(cadena[i]==' ')
		{
			cont++;
			longitud=strlen(cadena)-cont;
		}
	}
	if(opcion==1)
	{
		for(i=0;i<strlen(cadena);i++)
		{
			cadena[i]=toupper(cadena[i]);
		}
	}else
	if(opcion==2)
	{
		for(i=0;i<strlen(cadena);i++)
		{
			cadena[i]=tolower(cadena[i]);
		}
	}else
	if(opcion==3)
	{
		for(i=0;i<strlen(cadena);i+=2)
		{
			cadena[i]=toupper(cadena[i]);
		}
	}else
	if(opcion==4)
	{
		for(i=0;i<strlen(cadena);i++)
		{
			cadena[0]=toupper(cadena[0]);
			if(cadena[i]==' ')
			{
				cadena[i+1]=toupper(cadena[i+1]);
				}	
		}
	}
	printf("%s",cadena);
}

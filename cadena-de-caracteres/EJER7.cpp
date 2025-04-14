#include <stdio.h>
#include <string.h>

char cadena1[9999],cadena2[9999];
int i,j,cont1=0,cont2=0,ana=0;

main()
{
	printf("Ingrese la cadena 1\n");
	fgets(cadena1,sizeof(cadena1),stdin);
	printf("Ingrese la cadena 2\n");
	fgets(cadena2,sizeof(cadena2),stdin);
	int longitud1=strlen(cadena1)-1;
	int longitud2=strlen(cadena2)-1;
	for(i=0;i<longitud1;i++)
	{
		if(cadena1[i]== ' ')
		{
			cont1++;
			longitud1=strlen(cadena1)-cont1;
			for(j=i;j<longitud1;j++)
			{
				cadena1[j]=cadena1[j+1];
				cadena1[j+1]=' ';
		}
		longitud1--;
	}
	}
	for(i=0;i<longitud2;i++)
	{
		if(cadena2[i]== ' ')
		{
			cont2++;
			longitud2=strlen(cadena2)-cont2;
			for(j=i;j<longitud2;j++)
			{
				cadena2[j]=cadena2[j+1];
				cadena2[j+1]=' ';
			}
			longitud2--;
		}
	}
	if(longitud1==longitud2)
	{
		for(i=0;i<longitud1;i++)
		{
			for(j=0;j<longitud2;j++)
			{
			if(cadena1[i]==cadena2[j])
			{
				ana=ana+1;
				cadena2[j]=' ';
				break;
			}
		}
		}
	}
	if(longitud1==ana)
	{
		printf("Son anagramas");
	}else
	{
		printf("No son anagramas");
	}
}

#include <stdio.h>
#include <string.h>

char cadena[999999];
int i,j,palabra=1,palabraAux=1,cont=0;


main()
{
	char aux[9999];
	printf("Ingrese una cadena de caracteres \n");
	fgets(cadena,sizeof(cadena),stdin);
		if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }
	int longitud=strlen(cadena);
	for(i=0;i<longitud;i++)
	{
		if(cadena[i]==' ')
		{
			palabra++;
		}
	}
	int k=0;
	for(i=0;i<longitud;i++)
	{
		for(j=0;j<longitud;j++)
		{
			if(cadena[j]==' ')
			{
				palabraAux++;
			}
		if(palabraAux==palabra)
		{
		if(palabra==1)
		{
			cont++;
			if(aux[k]!=' ' && cont==1)
			{
			aux[k]=' ';
			k++;
		}
			aux[k]=cadena[j];
		}else
		{	
			aux[k]=cadena[j];
	 }
	k++;
	}
	}
	palabra--;
	palabraAux=1;
	}
	printf("La cadena al reves es %s",aux);
}

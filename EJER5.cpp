#include <stdio.h>
#include <string.h>

char cadena[999999];
int i,cont=1;

main()
{
	printf("Ingrese algo \n");
	fgets(cadena,sizeof(cadena),stdin);
	int longitud=strlen(cadena);
	for(i=0;i<longitud;i++)
	{
		if(cadena[i]==' ')
		{
			cont=cont+1;
		}
	}
	if(cont==1)
	{
	printf("La cadena tiene %d palabra",cont);
}else
{
	printf("La cadena tiene %d palabras",cont);
}
}

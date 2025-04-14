#include <stdio.h>
#include <string.h>

char cadena[10000000];
int i,contVocal=0,k=0;
main()
{
	printf("Ingrese una cadena de caracteres \n");
	fgets(cadena,sizeof(cadena),stdin);
	for(i=0;i<strlen(cadena);i++)
	{
		if(cadena[i]=='a' || cadena[i]=='e' || cadena[i]=='i' || cadena[i]=='o' || cadena[i]=='u')
		{
			contVocal=contVocal+1;
		}
	}
	printf("La cantidad de vocales encontradas son %d \n",contVocal);
}

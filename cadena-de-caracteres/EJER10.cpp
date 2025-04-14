#include <stdio.h>
#include <string.h>

char cadena[9999],subcadena[9999];
char * encontrado;
int i=1;

main()
{
	printf("Ingrese una cadena\n");
	fgets(cadena,sizeof(cadena),stdin);
	if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }
	printf("Ingrese otra cadena\n");
	fgets(subcadena,sizeof(subcadena),stdin);
	 if (subcadena[strlen(subcadena) - 1] == '\n') {
        subcadena[strlen(subcadena) - 1] = '\0';
    }
	encontrado=strstr(cadena,subcadena);
	if(encontrado!=NULL)
	{
		printf("La subcadena %s se encuentra en la cadena %s en la posicion %d\n",subcadena,cadena,encontrado-cadena+1);
	}else
	{
		printf("La subcadena %s no se encuentra en la cadena %s\n",subcadena,cadena);
	}
}



















#include <stdio.h>
#include <string.h>

char cadena[999999],caracter1[1],caracter2[1];
int i,letraEncontrada=0;

main()
{
	printf("Ingrese una cadena de caracteres \n");
	fgets(cadena,sizeof(cadena),stdin);
	printf("Ingrese el caracter de la cadena que quiere reemplazar \n");
	scanf("%s",&caracter1);
	printf("Ingrese el caracter por el cual lo quiere reemplazar \n");
	scanf("%s",&caracter2);
	for(i=0;i<strlen(cadena);i++)
	{
		if(cadena[i]==caracter1[0])
		{
			cadena[i]=caracter2[0];
			letraEncontrada=1;
		}
	}
	if(letraEncontrada==1)
	{
	printf("\nLa nueva cadena con los cambios realizados es: \n%s",cadena);
}else
{
	printf("\nNo se encontro dentro de la cadena una letra correspondiente a la que queria reemplazar \n");
}
}

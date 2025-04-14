#include <stdio.h>
#include <string.h>

char cadena[9999999],anedac[9999999];
int i;
main()
{
	printf("Ingrese una cadena de caracteres \n");
	scanf("%s",cadena);
	int posFin=strlen(cadena)-1;
	for(i=0;i<=posFin;i++)
	{
		anedac[i]=cadena[posFin-i];
	}
	char palindromo=strcmp(anedac,cadena);
	if(palindromo==0)
	{
		printf("La palabra es palindromo");
	}else
	{
		printf("La palabra no es palindromo");
	}

}

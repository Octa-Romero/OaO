#include <stdio.h>
#include <string.h>

char cadena1[9999],cadena2[9999],resultado[9999];


void sacarSaltoDeLinea(char cad1[], char cad2[])
{
	if (cadena1[strlen(cadena1) - 1] == '\n') {
        cadena1[strlen(cadena1) - 1] = '\0';
    }
	if (cadena2[strlen(cadena2) - 1] == '\n') {
        cadena2[strlen(cadena2) - 1] = '\0';
    }	
}

void espacioCadenas(char *aux,char cad2[])
{
	aux[0]=' ';
	strcat(aux,cadena2);
}

void concatenar(char cad1[], char cad2[])
{
	strcat(cad1,cad2);
}


void mostrarResultado(char *cad1)
{
	printf("El resultado de ambas cadenas concatenadas es:\n'%s'",cad1);
}




int main()
{
	printf("Ingrese una cadena de caracteres\n");
	fgets(cadena1,sizeof(cadena1),stdin);
	printf("Ingrese otra cadena de caracteres\n");
	fgets(cadena2,sizeof(cadena2),stdin);
	
	sacarSaltoDeLinea(cadena1,cadena2);
	
	char Cadena2[9999];
	
	espacioCadenas(Cadena2,cadena2);
	
	concatenar(cadena1,Cadena2);

	mostrarResultado(cadena1);
}

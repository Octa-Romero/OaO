#include <stdio.h>

char nombre[99];

main()
{
	printf("Ingrese su nombre \n");
	scanf("%s", nombre);
	printf("\nBienvenido %s, espero que el programa haya sido de su agrado\n",nombre);
}

#include <stdio.h>
#include <string.h>

int i;

main()
{
	FILE *fp;
	fp=fopen("usuarios.txt","w");
	char nombre[35], apellido[35];
	int dni,seguir,busqueda,opcion;
	printf("EJECUCIONES DEL PROGRAMA\nIngresar datos (1) / Buscar Datos (2) / Salir del programa (3)\n");
	scanf("%d",&opcion);
	do{
	switch(opcion)
	{
	case 1:
	do
	{
	printf("Ingrese el nombre del usuario\n");
	scanf("%s",nombre);
	printf("Ingrese el apellido del usuario\n");
	scanf("%s",apellido);
	printf("Ingrese el dni del usuario\n");
	scanf("%d",&dni);
	printf("Desea seguir cargando datos? (1=si 0=no)\n");
	scanf("%d",&seguir);
	fprintf(fp,"%s",nombre);
	fprintf(fp," %s",apellido);
	fprintf(fp," %d\n",dni);
}while(seguir!=0);
	fclose(fp);
	printf("SE HAN CARGAO LOS DATOS EN EL ARCHIVO CORRECTAMENTE (•-•)\n");
	break;
	
	case 2:
	fp=fopen("usuarios.txt","r");
	printf("\nIngrese el DNI del usuario que quiere buscar\n");
	scanf("%d",&busqueda);
	while(fscanf(fp,"%s %s %d",nombre,apellido,&dni)==3)
	{
		if(busqueda==dni)
		{
			printf("El usuario con DNI %d es %s %s",dni,apellido,nombre);
		}
	}
	fclose(fp);
	break;
}
}while(opcion!=3);
printf("PROGRAMA FINALIZADO CON EXITO,HASTA LUEGO (•-•)\n");
}

#include <stdio.h>
#include <string.h>

int i;

void ingresarDatos(FILE *fp,char nombre[],char apellido[],int dni,int seguir)
{
	fp=fopen("usuarios.txt","a");
		do
		{
			printf("\nIngrese el nombre del usuario\n");
			scanf("%s",nombre);
			printf("Ingrese el apellido del usuario\n");
			scanf("%s",apellido);
			printf("Ingrese el dni del usuario\n");
			scanf("%d",&dni);
			printf("\nDesea seguir cargando datos? (1=si 0=no)\n");
			scanf("%d",&seguir);
			fprintf(fp,"%s %s %d\n\n",nombre,apellido,dni);
		}while(seguir!=0);
		
			fclose(fp);
			
			printf("\nSE HAN CARGAO LOS DATOS EN EL ARCHIVO CORRECTAMENTE (•-•)\n");
}




void busquedaDni(FILE *fp,int busqueda,char *nombre,char *apellido)
{
	int encontrado=0,dni;
	fp=fopen("usuarios.txt","r");
	printf("\nIngrese el DNI del usuario que quiere buscar\n");
	scanf("%d",&busqueda);
	while(fscanf(fp,"%s %s %d",nombre,apellido,&dni)==3)
	{
		if(busqueda==dni)
		{
			printf("\nEl usuario con DNI %d es %s %s\n",dni,apellido,nombre);
			encontrado=1;
		}
	}
	
	if(encontrado==0)
	{
		printf("\nNo existe un usuario con ese DNI dentro del archivo\n");
	}
	fclose(fp);
}

main()
{
	FILE *fp;
	char nombre[35], apellido[35];
	int dni,seguir,busqueda,opcion;
	do
	{
	printf("\nEJECUCIONES DEL PROGRAMA\nIngresar datos (1) / Buscar Datos (2) / Salir del programa (3)\nQue ejecucion desea realizar?:");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1:
			
			ingresarDatos(fp,nombre,apellido,dni,seguir);
			
		break;
	
	case 2:
			
			busquedaDni(fp,busqueda,nombre,apellido);
		
		break;
}
}while(opcion!=3);
fp=fopen("usuarios.txt","r");
fclose(fp);
printf("\nPROGRAMA FINALIZADO CON EXITO,HASTA LUEGO (•-•)\n");

}

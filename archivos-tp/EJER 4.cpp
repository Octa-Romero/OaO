#include <stdio.h>
#include <string.h>

void validacionDatos(FILE *archivo,char *nombre,char *apellido,int dni)
{
	int dniAux,coincidencia=0;
	char nombreAux[35],apellidoAux[35];
	archivo=fopen("usuarios.txt","a+");
	while(fscanf(archivo,"%s %s %d",nombreAux,apellidoAux,&dniAux)==3)
	{
		if(dniAux==dni)
		{
			printf("\nYa existe un usuario con el DNI %d,cuyo usuario es %s %s\n",dniAux,apellidoAux,nombreAux);
			coincidencia=1;
		}
	}
	
	if(coincidencia==0)
	{
		fprintf(archivo,"%s %s %d\n\n",nombre,apellido,dni);
	}
	fclose(archivo);
}

void ingresarDatos(FILE *archivo,char nombre[],char apellido[],int dni,int seguir)
{
	archivo=fopen("usuarios.txt","a");
		do
		{
			printf("\nIngrese el nombre del usuario\n");
			scanf("%s",nombre);
			printf("Ingrese el apellido del usuario\n");
			scanf("%s",apellido);
			printf("Ingrese el dni del usuario\n");
			scanf("%d",&dni);
			validacionDatos(archivo,nombre,apellido,dni);
			printf("\nDesea seguir cargando datos? (1=si 0=no)\n");
			scanf("%d",&seguir);
		}while(seguir!=0);
		
			fclose(archivo);
			
			printf("\nSE HAN CARGAO LOS DATOS EN EL ARCHIVO CORRECTAMENTE (•-•)\n");
}

void busquedaNomCompleto(FILE *archivo,char *nombre,char *apellido,int dni)
{
	int encontrado=0;
	char busqNombre[35],busqApellido[35];
	archivo=fopen("usuarios.txt","r");
	printf("\nIngrese nombre del usuario:");
	scanf("%s",busqNombre);
	printf("\n\nIngrese apellido del usuario:");
	scanf("%s",busqApellido);
	while(fscanf(archivo,"%s %s %d",nombre,apellido,&dni)==3)
	{
		if(strcmp(busqNombre,nombre)==0 && strcmp(busqApellido,apellido)==0)
		{
			printf("\nEl usuario %s %s tiene de DNI %d \n",nombre,apellido,dni);
			encontrado=1;
			break;
		}
	}
	
	if(encontrado==0)
	{
		printf("\nNo existe un usuario con ese nombre y apelliido dentro del archivo\n");
	}
	fclose(archivo);
}

void busquedaDni(FILE *archivo,char *nombre,char *apellido,int dni)
{
	int encontrado=0,busqueda;
	archivo=fopen("usuarios.txt","r");
	printf("\nIngrese el DNI del usuario que quiere buscar\n");
	scanf("%d",&busqueda);
	while(fscanf(archivo,"%s %s %d",nombre,apellido,&dni)==3)
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
	fclose(archivo);
}

void ordenarNombres(FILE *archivo)
{
	archivo=fopen("usuarios.txt","a+");
	
}

main()
{
	FILE *archivo;
	char nombre[35], apellido[35];
	int dni,seguir,busqueda,opcion;
	do
	{
	printf("\nEJECUCIONES DEL PROGRAMA\nIngresar datos (1) / Buscar Datos (2) / Mostrar Datos (3) / Salir del programa (4)\nQue ejecucion desea realizar?:");
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1:
			
			ingresarDatos(archivo,nombre,apellido,dni,seguir);
			
		break;
	
	case 2:
		int opcionBusq;
			printf("\nMETODO DE BUSQUEDA\nNombre y Apellido (1) / DNI (2)\nCual desea utilizar?:");
			scanf("%d",&opcionBusq);
			switch(opcionBusq)
			{
				case 1:	
			
					busquedaNomCompleto(archivo,nombre,apellido,dni);
					
					break;
				case 2:
				
					busquedaDni(archivo,nombre,apellido,dni);
					
					break;
			}
		break;
		
	case 3:
		int opcionDatos;
		printf("\nMOSTRAR DATOS ORDENADOS POR:\nNombre (1) / Apellido (2) / DNI (3)\n");
		scanf("%d",&opcionDatos);
		switch(opcionDatos)
		{
			case 1:
				
				
				
				break;
				
				
		}
}
}while(opcion!=4);
printf("\nPROGRAMA FINALIZADO CON EXITO,HASTA LUEGO (•-•)\n");

}

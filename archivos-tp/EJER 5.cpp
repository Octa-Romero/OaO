#include <stdio.h>
#include <string.h>

void validacionDatos(FILE *archivo_nuevo,char *nombre,char *apellido,int dni)
{
	int dniAux,coincidencia=0;
	char nombreAux[35],apellidoAux[35];
	archivo_nuevo=fopen("usuarios nuevos.txt","a+");
	while(fscanf(archivo_nuevo,"%s %s %d",nombreAux,apellidoAux,&dniAux)==3)
	{
		if(dniAux==dni)
		{
			printf("\nYa existe un usuario con el DNI %d,cuyo usuario es %s %s\n",dniAux,apellidoAux,nombreAux);
			coincidencia=1;
		}
	}
	
	if(coincidencia==0)
	{
		fprintf(archivo_nuevo,"%s %s %d\n\n",nombre,apellido,dni);
	}
	fclose(archivo_nuevo);
}

void ingresarDatos(FILE *archivo_nuevo,char nombre[],char apellido[],int dni,int seguir)
{
	archivo_nuevo=fopen("usuarios nuevos.txt","a");
		do
		{
			printf("\nIngrese el nombre del usuario\n");
			scanf("%s",nombre);
			printf("Ingrese el apellido del usuario\n");
			scanf("%s",apellido);
			printf("Ingrese el dni del usuario\n");
			scanf("%d",&dni);
			validacionDatos(archivo_nuevo,nombre,apellido,dni);
			printf("\nDesea seguir cargando datos? (1=si 0=no)\n");
			scanf("%d",&seguir);
		}while(seguir!=0);
		
			fclose(archivo_nuevo);
			
			printf("\nSE HAN CARGAO LOS DATOS EN EL ARCHIVO CORRECTAMENTE (•-•)\n");
}

void busquedaNomCompleto(FILE *archivo_nuevo,char *nombre,char *apellido,int dni)
{
	int encontrado=0,contBusqNomCompleto=0;
	char busqNombre[35],busqApellido[35];
	archivo_nuevo=fopen("usuarios nuevos.txt","r");
	printf("\nIngrese nombre del usuario:");
	scanf("%s",busqNombre);
	printf("\n\nIngrese apellido del usuario:");
	scanf("%s",busqApellido);
	printf("\nResultados de la busqueda:\n");
	while(fscanf(archivo_nuevo,"%s %s %d",nombre,apellido,&dni)==3)
	{
		if(strcmp(busqNombre,nombre)==0 && strcmp(busqApellido,apellido)==0)
		{
		
			printf("\n%s %s de DNI %d \n",nombre,apellido,dni);
			encontrado=1;
			contBusqNomCompleto++;
		}
	}
	if(contBusqNomCompleto==1)
	{
	printf("\n%d resultado arrojado\n",contBusqNomCompleto);
}else if(contBusqNomCompleto>1)
{
	printf("\n%d resultados arrojados\n",contBusqNomCompleto);
}
	
	if(encontrado==0)
	{
		printf("\nNo existe un usuario con ese nombre y apelliido dentro del archivo\n");
	}
	fclose(archivo_nuevo);
}

void busquedaDni(FILE *archivo_nuevo,char *nombre,char *apellido,int dni)
{
	int encontrado=0,busqueda;
	archivo_nuevo=fopen("usuarios nuevos.txt","r");
	printf("\nIngrese el DNI del usuario que quiere buscar\n");
	scanf("%d",&busqueda);
	while(fscanf(archivo_nuevo,"%s %s %d",nombre,apellido,&dni)==3)
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
	fclose(archivo_nuevo);
}

void ordenar(FILE *archivo_nuevo,char *nombre,char *apellido,int dni)
{
	archivo_nuevo= fopen("usuarios nuevos.txt", "r");
	int tam=0,opcion;
	printf("\nMOSTRAR DATOS ORDENADOS POR:\nNombre y Apellido (1) / DNI (2)\nCual opcion elige?:");
	scanf("%d",&opcion);
	while(fscanf(archivo_nuevo,"%s %s %d",nombre,apellido,&dni)==3)
	{
		tam++;
	}
	rewind(archivo_nuevo);
	int dnis[tam],cont=0;
	char nombres[tam][35],apellidos[tam][35];
	while(fscanf(archivo_nuevo,"%s %s %d",nombre,apellido,&dni)==3)
	{
		dnis[cont]=dni;
		strcpy(nombres[cont],nombre);
		strcpy(apellidos[cont],apellido);
		cont++;
	}
	fclose(archivo_nuevo);
	if(opcion==1)
	{
	for(int i=0;i<tam-1;i++)
	{
		for(int j=i+1;j<tam;j++)
		{
			if(strcmp(apellidos[i],apellidos[j]) > 0 || 
			   strcmp(apellidos[i],apellidos[j])==0 && strcmp(nombres[i],nombres[j]) > 0)
			   {
			   	char auxNom[35],auxApe[35];
			   	int auxDni;
			   	strcpy(auxApe,apellidos[i]);
			   	strcpy(apellidos[i],apellidos[j]);
			   	strcpy(apellidos[j],auxApe);
			   	strcpy(auxNom,nombres[i]);
			   	strcpy(nombres[i],nombres[j]);
			   	strcpy(nombres[j],auxNom);
			   	auxDni=dnis[i];
			   	dnis[i]=dnis[j];
			   	dnis[j]=auxDni;
			   }
		}
	}
	for(int i=0;i<tam;i++)
	{
		printf("\n  %s %s de DNI:%d\n",apellidos[i],nombres[i],dnis[i]);
	}
	printf("\nResultados arrojados : %d\n",tam);
}else if(opcion==2)
{
	for(int i=0;i<tam-1;i++)
	{
		for(int j=i+1;j<tam;j++)
		{
			if(dnis[i]>dnis[j])
			   {
			   	char auxNom[35],auxApe[35];
			   	int auxDni;
			   	strcpy(auxApe,apellidos[i]);
			   	strcpy(apellidos[i],apellidos[j]);
			   	strcpy(apellidos[j],auxApe);
			   	strcpy(auxNom,nombres[i]);
			   	strcpy(nombres[i],nombres[j]);
			   	strcpy(nombres[j],auxNom);
			   	auxDni=dnis[i];
			   	dnis[i]=dnis[j];
			   	dnis[j]=auxDni;
			   }
		}
	}
	for(int i=0;i<tam;i++)
	{
		printf("\n  %d %s %s\n\n",dnis[i],apellidos[i],nombres[i]);
	}
	printf("\nResultados arrojados : %d\n",tam);
}else if(opcion!=1 || opcion !=2)
{
	printf("\nOpcion incorrecta,porfavor ingrese una opcion valida\n");
}
}

main()
{
	FILE *archivo,*archivo_nuevo;
	char nombre[35], apellido[35];
	int dni,seguir,busqueda,opcion,guardar=0;
	if(guardar==0)
	{
	archivo_nuevo=fopen("usuarios nuevos.txt","w");
	archivo=fopen("usuarios.txt","r");
	while(fscanf(archivo,"%s %s %d",nombre,apellido,&dni)==3)
	{
		fprintf(archivo_nuevo,"%s %s %d\n\n",nombre,apellido,dni);
	}
	fclose(archivo);
	fclose(archivo_nuevo);
	guardar++;
}
	do
	{
	printf("\nEJECUCIONES DEL PROGRAMA\nIngresar datos (1) / Buscar Datos (2) / Mostrar Datos (3) / Salir del programa (4)\nQue ejecucion desea realizar?:");
	scanf("%d",&opcion);
	if(opcion!=1&&opcion!=2&&opcion!=3&&opcion!=4)
	{
		printf("\nEjecucion no valida para el programa,porfavor ingrese una valida\n");
	}
	switch(opcion)
	{
	case 1:
			ingresarDatos(archivo_nuevo,nombre,apellido,dni,seguir);
		break;	
	case 2:
		int opcionBusq;
			printf("\nMETODO DE BUSQUEDA\nNombre y Apellido (1) / DNI (2)\nCual desea utilizar?:");
			scanf("%d",&opcionBusq);
			if(opcionBusq!=1 && opcionBusq!=2)
			{
				printf("\nOpcion incorrecta,porfavor ingrese una opcion valida\n");
			}
			switch(opcionBusq)
			{
				case 1:				
					busquedaNomCompleto(archivo_nuevo,nombre,apellido,dni);					
					break;
				case 2:				
					busquedaDni(archivo_nuevo,nombre,apellido,dni);					
					break;
			}
		break;		
	case 3:				
			ordenar(archivo_nuevo,nombre,apellido,dni);			
		break;
}
}while(opcion!=4);
printf("\nPROGRAMA FINALIZADO CON EXITO,HASTA LUEGO (•-•)\n");
}

#include <stdio.h>
#include <string.h>

int cont=0;

void ingresarJugadores(FILE *archivo, char nombre[], int puntaje)
{
	int seguir;
	archivo=fopen("jugadores.txt","a+");
	do
	{
		printf("\nIngrese el nombre del jugador\n");
		scanf("%s",nombre);
		printf("\nIngrese el puntaje del jugador\n");
		scanf("%d",&puntaje);
		fprintf(archivo,"%s %d\n\n",nombre,puntaje);
		printf("\nDesea seguir cargando datos? 1=si 0=no\n");
		scanf("%d",&seguir);
	}while(seguir!=0);
	fclose(archivo);
	printf("\nSE HAN CARGAO LOS DATOS EN EL ARCHIVO CORRECTAMENTE (•-•)\n");
}

void mostrarJugadores(FILE *archivo, char *nombre, int puntaje)
{
	int tam=0,cont=0;
	archivo=fopen("jugadores.txt","r");
	while(fscanf(archivo,"%s %d",nombre,&puntaje)==2)
	{
		tam++;
	}
	rewind(archivo);
	int puntajes[tam];
	char nombres[tam][35];
	while(fscanf(archivo,"%s %d",nombre,&puntaje)==2)
	{
		puntajes[cont]=puntaje;
		strcpy(nombres[cont],nombre);
		cont++;
	}
	fclose(archivo);
	for(int i=0;i<tam-1;i++)
	{
		for(int j=i+1;j<tam;j++)
		{
			if(puntajes[i]<puntajes[j])
			{
				int puntajeAux;
				char nomAux[35];
				strcpy(nomAux,nombres[i]);
				strcpy(nombres[i],nombres[j]);
				strcpy(nombres[j],nomAux);
				puntajeAux=puntajes[i];
				puntajes[i]=puntajes[j];
				puntajes[j]=puntajeAux;
			}
		}
	}
	printf("\n");
	for(int i=0;i<tam;i++)
	{
		printf("%s %d\n\n",nombres[i],puntajes[i]);
	}
	printf("\nResultados arrojados: %d\n",tam);
}

void buscarJugadores(FILE *archivo,FILE *registros, char *nombre,int puntaje,int cont)
{
	char busqNombre[35];
	int encontrado=0;
	archivo=fopen("jugadores.txt","r");
	registros=fopen("registros.txt","a+");
	fprintf(registros,"\n|Busqueda %d|\n",cont);
	printf("\nIngrese el nombre del jugador\n");
	fprintf(registros,"\nIngrese el nombre del jugador\n");
	scanf("%s",busqNombre);
	fprintf(registros,"\nBusqueda : %s\n",busqNombre);
	while(fscanf(archivo,"%s %d",nombre,&puntaje)==2)
	{
		if(strcmp(busqNombre,nombre)==0)
		{
			printf("\nEl jugador %s tiene un puntuaje de %d\n",nombre,puntaje);
			fprintf(registros,"\nEl jugador %s tiene un puntaje de %d\n",nombre,puntaje);
			encontrado=1;
		}
	}
	if(encontrado==0)
	{
		printf("\nNo existe un usuario con ese nombre dentro del archivo\n");
		fprintf(registros,"\nNo existe un usuario con ese nombre dentro del archivo\n");
	}
	fclose(archivo);
	fclose(registros);
}

main()
{
	FILE *archivo,*registros;
	char nombre[35];
	int puntaje,opcion;
	do
	{
		printf("\nEJECUCIONES DEL PROGRAMA:\nIngresar jugadores (1) / Mostrar los mejores 10 jugadores (2) / Buscar jugadores (3) / Salir del programa (4) \nEliga su opcion:");
		scanf("%d",&opcion);
		if(opcion!=1&&opcion!=2&&opcion!=3&&opcion!=4)
		{
			printf("\nTipo de ejecucion no valida,porfavor ingrese una opcion correcta\n");
		}
		switch(opcion)
		{
			case 1:
				ingresarJugadores(archivo,nombre,puntaje);
				break;
				
			case 2:
				mostrarJugadores(archivo,nombre,puntaje);
				break;
			
			case 3:
				cont++;
				buscarJugadores(archivo,registros,nombre,puntaje,cont);
				break;
		}
	}while(opcion!=4);
	printf("\nPROGRAMA FINALIZADO CON EXITO,HASTA LUEGO (•-•)\n");
}

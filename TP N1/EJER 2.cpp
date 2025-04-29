#include <stdio.h>

char nombre [20],apellido [20];
int dni,anioNaci,mesNaci,diaNaci,edad,edadMes,edadDia,anioElecc=2025,mesElecc=9,diaElecc=30;

main(){
	printf("Ingrese su nombre \n");
	scanf("%s",& nombre);
	printf("Ingrese su apellido \n");
	scanf("%s",& apellido);
	printf("Ingrese su DNI \n");
	scanf("%d",& dni);
	printf("Ingrese la fecha de nacimiento (dd/mm/yy) \n");
	scanf("%d/%d/%d",& diaNaci,& mesNaci,& anioNaci);
	edad=anioElecc - anioNaci;
	if(mesNaci>mesElecc)
	{
		edad--;
	}
	
	if(edad>=16 && edad<18)
	{
		printf("%s %s de DNI:%d puede votar \n",apellido,nombre,dni);
	}
	
	if(edad<16)
	{
		printf("%s %s de DNI:%d no puede votar \n",apellido,nombre,dni);
	}
	
	if(edad>=18 && edad<80)
	{
		printf("%s %s de DNI:%d debe votar \n",apellido,nombre,dni);
	} 
	
	if(edad>=80)
	{
		printf("%s %s de DNI:%d puede votar \n",apellido,nombre,dni);
	}
}

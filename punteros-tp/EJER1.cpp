#include <stdio.h>

int num1,num2,a,b;

void cambio(int *valor1, int *valor2) {
	a=*valor1;
	b=*valor2;
	
	*valor1=*valor2;
	*valor2=a;
	printf("Los valores iniciales son num1=%d , num2=%d.Y los valores invertidos son num1=%d , num2=%d \n",a,b,*valor1,*valor2);
}

int main(){
	printf("Ingresar el primer valor \n");
	scanf("%d",&num1);
	printf("Ingresar el segundo valor \n");
	scanf("%d",&num2);
	cambio(&num1,&num2);
}

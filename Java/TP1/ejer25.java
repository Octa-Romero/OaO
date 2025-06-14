import java.util.Scanner;
public class ejer25 {

	public static void suma(float num1, float num2,float suma, Scanner sc)	// funcion de tipo void para hacer la suma de los dos valores
	{
		System.out.println("Ingrese un numero: ");		// ingreso del primer valor
		num1 = sc.nextInt();
		System.out.println("Ingrese otro numero: ");	// ingreso del segundo valor
		num2 = sc.nextInt();
		suma=num1 +  num2;		// calculo la suma de ambos valores
		System.out.println("El resultado de la suma entre " + num1 + " y " + num2 + " es: " + suma);	// imprimo mensaje de salida con el resultado
	}
	
	public static void resta(float num1, float num2,float resta, Scanner sc)	// funcion de tipo void hacer la resta de los dos valores
	{
		System.out.println("Ingrese un numero: ");
		num1 = sc.nextInt();
		System.out.println("Ingrese otro numero: ");
		num2 = sc.nextInt();
		resta=num1 -  num2;		// calculo la resta de ambos valores
		System.out.println("El resultado de la resta entre " + num1 + " y " + num2 + " es: " + resta);		// imprimo mensaje de salida con el resultado
	}
	
	public static void multi(float num1, float num2,float multi, Scanner sc)	// funcion de tipo void hacer la multiplicacion de los dos valores
	{
		System.out.println("Ingrese un numero: ");
		num1 = sc.nextInt();
		System.out.println("Ingrese otro numero: ");
		num2 = sc.nextInt();
		multi=num1 *  num2;		// calculo la multiplicacion de ambos valores
		System.out.println("El resultado de la multiplicacion entre " + num1 + " y " + num2 + " es: " + multi);		// imprimo mensaje de salida con el resultado
	}
	
	public static void divi(float num1, float num2,float divi, Scanner sc)		// funcion de tipo void hacer la division de los dos valores
	{
		System.out.println("Ingrese un numero: ");
		num1 = sc.nextInt();
		System.out.println("Ingrese otro numero: ");
		num2 = sc.nextInt();
		divi=num1 / num2;		// calculo la division de ambos valores
		System.out.println("El resultado de la division entre " + num1 + " y " + num2 + " es: " + divi);	// imprimo mensaje de salida con el resultado 
	}
	
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int opcion;
		float suma=0,resta=0,multi=0,divi=0,num1=0,num2=0;		// inicializo variables para realizar los calculos correspondientes
		do
		{
			System.out.print("\nBienvenido a una calculador simple, ingrese con que opcion desea arrancar\n-Suma (1)\n-Resta (2)\n-Multiplicacion (3)\n-Division (4)\n-Salir del programa (5)\nQue opcion desea realizar?: ");	// le consulto al usuario la opcion que desee realizar
			opcion = sc.nextInt();
			switch(opcion)		// switch case para leer la opcion que ingreso el usuario
			{
				case 1:		// bloque de codigo que se ejecuta cuando el usuario ingresa 1
					suma(num1,num2,suma,sc);	// llamo a la funcion suma
					break;	// una vez se termina de ejecutar el bloque, salgo del switch
					
				case 2:
					resta(num1,num2,resta,sc);	// llamo a la funcion resta
					break;
					
				case 3:
					multi(num1,num2,multi,sc);	// llamo a la funcion multi
					break;
					
				case 4:
					divi(num1,num2,divi,sc);	// llamo a la funcion divi
					break;
					
				case 5:
					System.out.println("TERMINANDO PROGRAMA, HASTA LUEGO....");		// mensaje de salida para despedirse del usuario en caso de que haya decidido salir del programa
					break;
					
				default:	// bloque de codigo que se ejecuta cuando la opcion que ingreso el usuario no corresponda con ningun case anterior(no valido)
					System.out.println("\nOpcion no valida, ingrese 1, 2, 3, 4 o 5\n");		// imprimo mensaje de salida al usuario para indicarle que la opcion no es valida
					break;
			}
		}while(opcion!=5);	// si el usuario ingresa 5 como opcion (salir del programa) automaticamente saldremos del ciclo do-while
		sc.close();
	}

}

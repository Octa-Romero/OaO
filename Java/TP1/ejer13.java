import java.util.Scanner;
public class ejer13 {

	public static void celsiusAFarenheit(float tempCelsius)	// funcion para pasar de celsius a farenheit
	{
		float resFaren;
		resFaren=(tempCelsius*9/5)+32;	// formula de conversion
		System.out.println("La conversion de " + tempCelsius + "°C a Farenheit equivale a " + resFaren + "°F");
	}
	
	public static void farenheitACelsius(float tempFaren)	// funcion para pasar de farenheit a celsius
	{
		float resCelsius;
		resCelsius=(tempFaren-32)*5/9;	// formula de conversion
		System.out.println("La conversion de " + tempFaren + "°F a Celsius equivale a " + resCelsius + "°C");
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		float temp=0;
		int opcion;
		do {	
		System.out.print("\nOpciones de conversion:\n-Farenheit a Celsius (1)\n-Celsius a Farenheit (2)\n-Salir del programa (3)\nCual desea realizar?: ");	// solicito al usuario la opcion que desee realizar
		opcion = sc.nextInt();
		if(opcion==1)
		{
		System.out.print("Ingrese una temperatura en Farenheit: ");	// solicito al usuario el valor de la temperatura como Farenheit
		temp = sc.nextFloat();
		}else if(opcion==2)
		{
			System.out.print("Ingrese una temperatura en Celsius: ");	// solicito al usuario el valor de la temperatura como Celsius
		temp = sc.nextFloat();
		}
		switch(opcion)	// realizo un switch case para manejar las opciones que ingrese el usuario y desee realizar
		{
		case 1:		// bloque de codigo que se ejecuta cuando el usuario ingresa 1
				celsiusAFarenheit(temp);	// llamo a la funcion celsiusAFarenheit pasandole como parametro el valor de la temperatura
			break;
		
		case 2:		// bloque de codigo que se ejecuta cuando el usuario ingresa 2
				farenheitACelsius(temp);	// llamo a la funcion farenheitACelsius pasandole como parametro el valor de la temperatura
			break;
			
		case 3:		// bloque de codigo que se ejecuta cuando el usuario ingresa 3
				System.out.println("\nTERMINANDO PROGRAMA, HASTA LUEGO...");	// imprimo un mensaje de despedida al salir del programa
			break;
			
		default:	// bloque de codigo que se ejecuta cuando el usuario ingresa una opcion no valida(fuera de lo pedido)
				System.out.println("\nOpcion no valida, ingrese 1, 2 o 3");		// mensaje para hacerle saber al usuario las opciones que son validas
			break;
		}
		}while(opcion!=3);	// condicion del ciclo do while que se realiza mientras la opcion sea distinto a 3(para salir del programa)
		sc.close();
	}

}

import java.util.Scanner;
public class ejer3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);	// inicializamos Scanner
		int numero;			// declaro variable de tipo entero
		boolean noPrimo;	// declaro variable de tipo booleano
		do	// hago un ciclo do while
		{
			noPrimo=false; // inicializo variable con valor false
			System.out.print("Ingrese un numero:"); // pido al usuario un numero
			numero = scanner.nextInt();// leo el numero que ingreso el usuario 
			for(int i=2;i<numero;i++) // hacer un ciclo for que recorra valores desde el 2 hasta el numero ingresado(no incluido) 
			{
				if(numero % i == 0)	// condicion para saber si dicho numero no es primo
				{
					noPrimo=true; // si se cumple dicha condicion, el valor del booleano pasa a ser true
					break;	// al encontrar al menos un divisor del numero, salgo del ciclo
				}
			}
		}while(numero<100 || noPrimo); // condicion del ciclo do while que si no se cumple(numero mayor o igual a 100 y a la vez sea primo), se sale del ciclo
		System.out.println("Saliendo del programa"); // mensaje que se muestra cuando se sale del ciclo
		scanner.close(); // se cierra el scanner
	}

}

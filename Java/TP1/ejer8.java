import java.util.Random;
import java.util.Scanner;
public class ejer8 {

	public static void main(String[] args) {
		Random random = new Random();	// llamo a la funcion Random
		Scanner sc = new Scanner(System.in);
		boolean adivinado;	// declaro variable de tipo booleano
		int numero,intentos=0;	// declaro variables para el numero y la cantidad de intentos
		int secretNumber=random.nextInt(101);	// genero un numero random desde 1 hasta 100 inclusive
		System.out.println("HORA DE ADIVINAR UN NUMERO MAESTRO");
		do {	// ciclo do while para repetir el ingreso de datos hasta que se salga del mismo
			adivinado=false;	// inicializo la variable en false
			System.out.print("Tire un numero aleatorio a ver si puede averiguarlo: ");
			numero = sc.nextInt();
			if(numero > secretNumber)	// condicion para saber si el numero ingresado por el usuario es mayor que el numero random
			{
				System.out.println("\nEl numero secreto es menor");	// en caso de cumplirse, imprimo un mensaje a modo de pista
				intentos++;	// incremento la cantidad de intentos
			}
			else if(numero < secretNumber)	// condicion que se cumple cuando la anterior no lo hace, implicando que dicho numero es menor al numero random
			{
				System.out.println("\nEl numero secreto es mayor");	// mensaje a modo de pista
				intentos++;	// incremento la cantidad de intentos
			}
			if(numero==secretNumber)	// condicion para saber si el numero ingresado es igual al numero random
			{
				System.out.println("\n!!FELICIDADES HAS ACERTADO BROOO¡¡");	// en caso de cumplirse, se muestra un mensaje felicitando al usuario de que gano el juego
				adivinado=true;	// la variable de tipo booleano para saber si el usuario acerto pasa a ser "true"
				intentos++;	// incremento la cantidad de intentos
			}
		}while(adivinado==false);	// la condicion del ciclo do while que implica que si el usuario adivina el numero random, se saldra de este ciclo
		if(intentos==1)
		{
		System.out.println("\nTe ha tomado un total de " +  intentos + " intento");
		}else if(intentos > 1)
		{
		System.out.println("\nTe ha tomado un total de " +  intentos + " intentos");
		}
		sc.close();
	}

}

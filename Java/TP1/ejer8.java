import java.util.Random;
import java.util.Scanner;
public class ejer8 {

	public static void main(String[] args) {
		Random random = new Random();	// llamo a la funcion Random
		Scanner sc = new Scanner(System.in);
		boolean adivinado;	// declaro variable de tipo booleano
		int numero,intentos=0;	
		int secretNumber=random.nextInt(101);	// genero un numero random desde 1 hasta 100 inclusive
		System.out.println("HORA DE ADIVINAR UN NUMERO MAESTRO");
		do {
			adivinado=false;	// inicializo la variable en false
			System.out.print("Tire un numero aleatorio a ver si puede averiguarlo: ");
			numero = sc.nextInt();
			if(numero > secretNumber)
			{
				System.out.println("\nEl numero secreto es menor");
				intentos++;
			}
			else if(numero < secretNumber)
			{
				System.out.println("\nEl numero secreto es mayor");
				intentos++;
			}
			if(numero==secretNumber)
			{
				System.out.println("\n!!FELICIDADES HAS ACERTADO BROOO¡¡");
				adivinado=true;
				intentos++;
			}
		}while(adivinado==false);
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

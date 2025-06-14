import java.util.Scanner;
public class ejer21 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int[] numeros= {20, 35, 100, 130, 175, 61, 16, 981, 53, 32};	// declaro el array con los 10 numeros enteros
		int x,cont=0;	
		System.out.print("Ingrese un numero: ");	// solicito al usuario el ingreso de un numero
		x=sc.nextInt();
		for(int numero : numeros)	// utilizo un bucle for-each para recorrer cada numero dentro del array numeros
		{
			if(x < numero)	// condicion para saber si el numero ingresado por el usuario es mayor que algun elemento dentro del array
			{
				cont++;		// en caso de cumplirse, incremento el contador
			}
		}
		System.out.println("\nLa cantidad de elementos dentro del array que son mayores que el numero " + x + " son: " + cont);		// imprimo mensaje de salida con el resultado
		sc.close();
	}
}

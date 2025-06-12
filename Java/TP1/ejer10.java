import java.util.Scanner;
public class ejer10 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num,factorial = 0,numAux; // declaro variables de tipo int
		System.out.print("Ingrese un numero positivo ");
		num = sc.nextInt();
		while(num<0)	// validacion de datos para saber si el numero es un no negativo
		{
			System.out.print("Se solicita un valor positivo, porfavor ingrese un numero positivo ");	// vuelvo a solicitar el ingreso del numero
			num = sc.nextInt();
		}
		numAux=num;	// almaceno en una variable auxiliar el valor del numero
		factorial=num;	// almaceno el valor del numero en la variable del resultado del factorial
		for(int i=1;i<num;i++)	// ciclo for para recorrer todos los valores anteriores al numero
		{
			numAux--;	// decremento el valor de la variable auxiliar
			factorial=factorial * numAux;	// multiplico el valor de la variable factorial por el valor de la variable auxiliar
		}
		System.out.println("El factorial del numero " + num + " es " + factorial);
		sc.close();
	}

}

import java.util.Scanner;
public class ejer4 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero,sumPar=0,sumImpar=0;	// declaro variables de tipo int para el numero y la suma de los pares e impares
		System.out.print("Ingrese un numero: ");
		numero = scanner.nextInt();	
		while(numero<1)		// validacion de datos para saber si es positivo
		{
			System.out.println("Ingrese un numero positivo porfavor");	// solicito de nuevo que el usuario ingrese el valor del numero
			System.out.print("Ingrese un numero: ");
			numero = scanner.nextInt();
		}
		for(int i=1;i<numero;i++)	// hacer ciclo for para que recorra desde el 1 hasta el numero ingresado por el usuario sin incluir
		{
			if(i % 2 == 0)	// condicion para saber si es par
			{
				sumPar=sumPar + i;	// si se cumple acumulo dentro de la variable sumPar dichos numeros pares
			}else	// en caso de no ser par, sera impar
			{
				sumImpar=sumImpar + i;	// si se cumple acumulo dentro de la variable sumImpar los numeros impares
			}
		}
		System.out.println("Suma de los numeros pares hasta el numero N: " + sumPar);	// imprimo la suma de todos los numeros pares
		System.out.println("Suma de los numeros impares hasta el numero N: " + sumImpar);	// imrpimo la suma de todos los numeros impares
		scanner.close();
	}

}

import java.util.Scanner;
public class ejer5 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero,res;	// declaro variables de tipo int para almacenar el numero y el resultado de la tabla de multiplicar
		System.out.print("Ingrese un numero del 1 al 10: ");	
		numero = scanner.nextInt();
		while(numero<1 || numero>10)	// validacion de datos para saber si el numero ingresado por el usuario esta entre 1 y 10 inclusive
		{
			System.out.println("Ingrese un numero del 1 al 10 porfavor");	// solicito de nuevo al usuario el ingreso del numero
			System.out.print("Ingrese un numero: ");
			numero = scanner.nextInt();
		}
		for(int i=1;i<=10;i++)	// ciclo for para recorrer valores desde 1 hasta el numero ingresado
		{
			res=numero * i;	// almaceno en la variable res la multiplicacion entre el valor del numero ingresado y el valor de i en cada iteracion
			System.out.println(numero + "x" + i + "=" + res);	// imprimo el valor del numero, de su multiplicador(el valor de i) y del resultado
		}
		scanner.close();

	}

}

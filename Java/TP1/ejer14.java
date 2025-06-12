import java.util.Scanner;
public class ejer14 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num;
		System.out.print("Ingrese la cantidad de terminos para la secuencia Fibonacci: ");	// solicito cantidad de terminos para la secuencia Fibonacci
		num = sc.nextInt();
		int a=0;	// variable que almacena el primer valor por determinado de una secuencia Fibonacci
		int b=1;	// variable que almacena el segundo valor por determinado de una secuencia Fibonacci
		System.out.println("La secuencia Fibonacci de " + num + " terminos es: ");
		for(int i=1;i<=num;i++)	// ciclo for para recorrer todos los terminos desde i hasta la ingresada por el usuario
		{
			if(i==num)	// en caso de ser el ultimo termino, imprimo solo el valor
			{
				System.out.print(a);
			}else		// en caso de no serlo, lo imprimo pero con una coma para separar a mas de un termino
			{
				System.out.print(a + ", ");
			}
			int aux=a+b;	// almaceno en la variable auxiliar el valor de la suma entre los dos ultimos terminos dependiendo del termino en el que estemos
			a=b;	// intercambio el valor entre a y b para avanzar al siguiente termino
			b=aux;	// finalmente almaceno en b el valor de la variable auxiliar para poder sumarlo en la proxima iteracion
		}
		sc.close();
	}

}

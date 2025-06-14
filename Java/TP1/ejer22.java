import java.util.Scanner;
public class ejer22 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		double[] calificaciones=new double[5];	// declaro array de tipo double
		double prom=0;	// inicializo variable para calcular el promedio
		String[] p= {"primera","segunda","tercera","cuarta","quinta"};
		for(int i=0;i<5;i++)	// hacer ciclo for para recorrer las 5 posiciones de memoria del array
		{
			System.out.print("Ingrese la " + p[i] + " calificacion: ");		// solicito al usuario el ingreso del valor i
			calificaciones[i]=sc.nextDouble();
		}
		for(double calificacion : calificaciones)	// realizo un bucle for-each para recorrer todos los valores del array calificaciones
		{
			prom+=calificacion/5;	// calculo el promedio
		}
		System.out.println("\nEl promedio de todas las calificaciones es: " +  prom);	// imprimo mensaje de salida con el resultado
		sc.close();
	}
}

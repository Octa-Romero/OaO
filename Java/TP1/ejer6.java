import java.util.Scanner;
public class ejer6 {

	public static void main(String[] args) {
		String palabra="";									// declaro variable de tipo string para almacenar la palabra
		Scanner sc=new Scanner(System.in); 					// declarar scanner para leer variable de entrada
		System.out.print("Ingrese una palabra/s: "); 		// pido al usuario que me ingrese una palabra o mas
		palabra=sc.nextLine(); 								// llamo a scanner leo la variable palabra como entrada
		String palabraInvertida=""; 						// declaro variable para almacenar la palabra invertida
		for(int i=palabra.length()-1;i>=0;i--)				//ciclo for para recorrer desde la ultima letra de la variable hasta la primera
		{
			palabraInvertida+=palabra.charAt(i); 			// almaceno en la variable palabraInvertida las letras de la variable palabra empezando desde el final
		}
		System.out.println(palabraInvertida);				// imprimo la palabra invertida como salida
		sc.close(); 										// cierro el scanner
	}
}

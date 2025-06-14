import java.util.Scanner;
public class ejer17 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int palabras=1;	// declaro contador de palabras
		String frase;	// declaro variable de tipo string para almacenar una cadena de caracteres
		System.out.print("Ingrese una frase: ");
		frase = sc.nextLine();
		for(int i=0;i<frase.length()-1;i++)	// recorro todos los valores/letras de la cadena
		{
			if(frase.charAt(i)==' ')	// condicion para saber si la palabra tiene algun espacio
			{
				palabras++;		// si se cumple, el contador de las palabras se incrementa
			}
		}
		System.out.println("La frase '" + frase + "' tiene un total de " + palabras + " palabra/s");	// mensaje de salida
		sc.close();
	}

}

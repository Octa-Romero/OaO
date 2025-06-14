import java.util.Random;
import java.util.Scanner;
public class ejer20 {

	public static void main(String[] args) {
		Random random = new Random();
		Scanner sc = new Scanner(System.in);
		int longitud,randomChar,randomString;	// declaro variables para la longitud de la contraseña, un caracter random, y una cadena de caracteres aleatoria
		String letraMay="ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";	// declaro cadena de caracteres para letras mayusculas
		String letraMin="abcdefghijklmnñopqrstuvwxyz";	// declaro cadena de caracteres para letras minuscula
		String nums="1234567890";	// declaro cadena de caracteres para los numeros
		String[] strings={letraMay, letraMin, nums};	// declaro un array de tipo string para almacenar las cadenas de caracteres
		String contraseña="";	// declaro variable de tipo string para almacenar la contraseña
		System.out.print("Ingrese la longitud deseada para su contraseña: ");	// le pido al usuario la longitud
		longitud = sc.nextInt();	
		for(int i=0;i<longitud;i++)		// hacer ciclo for para recorer la longitud ingresada por el usuario
		{
			randomString=random.nextInt(3);		// llamo a la funcion random para definir el string del array
			randomChar=random.nextInt(strings[randomString].length());	// llamo a la funcion random para definir un caracter random del string 
			contraseña+=strings[randomString].charAt(randomChar);	// almaceno en la variable contraseña dicho caracter
		}
		System.out.println("Contraseña generada: " + contraseña);		// imprimo mensaje de salida
		sc.close();
	}

}

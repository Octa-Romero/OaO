import java.util.Scanner;
public class ejer7 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String cadena="";	
		String vocales="aeiou";	// declaro variable de tipo string con las vocales para compararlo
		int cantVocales=0,contEspacios=0;	//declaro contadores de vocales y de espacios
		System.out.print("Ingrese una cadena de caracteres: ");	
		cadena = sc.nextLine();
		for(int i=0;i<cadena.length();i++)	// hacer ciclo for para recorrer todas las letras de la cadena
		{
			if(cadena.charAt(i)== ' ')	// condicion que sirve para averiguar si dicha cadena tiene mas de una palabra osea algun espacio
			{
				contEspacios++;	// si se cumple, el contador de espacios se incrementa
			}
		}
		for(int i=0;i<cadena.length();i++)
		{
			for(int j=0;j<vocales.length();j++)		// hacer ciclo for que recorra todas las vocales dentro de la variable de tipo string
			{
				if(Character.toLowerCase(Character.toUpperCase(cadena.charAt(i)))==Character.toLowerCase(Character.toUpperCase(vocales.charAt(j))))	// condicion que sirve para averiguar si dentro de la cadena hay alguna vocal
				{
					cantVocales++;	//si la condicion se cumple, incremento el contador de vocales
				}
			}
		}
		int cantCons=(cadena.length() - contEspacios) - cantVocales;	// declaro una variable de tipo int para calcular la cantidad de consonantes(sabiendo que no son vocales), restandole a la longitud de la cadena la cantidad de espacios y la cantidad de vocales encontradas
		System.out.println("Cantidad de vocales: " + cantVocales);	// imprimo la cantidad de vocales
		System.out.println("Cantidad de consonantes: " + cantCons);	// imprimo la canitdad de consonantes
		sc.close();
	}

}

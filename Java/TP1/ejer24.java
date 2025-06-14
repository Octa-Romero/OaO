import java.util.Scanner;
public class ejer24 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String[] cadenas= {"hola soy jose","kevin zenon","sudafrica","aguante bocaaa","hola soy una gran cadena de texto que te parece"};	// declaro un arreglo con 5 cadenas de caracteres
		int palabras=1,espacios=0,letras=0,cantVocal=0,cantCons=0;	// declaro contadores
		String vocales="aeiou";		// variable de tipo string con las vocales
		System.out.print("5 cadenas de caracteres, sus vocales, consonantes y cantidad de palabras:\n");
		for(String cadena : cadenas)	// bucle for each para recorrer cada cadena de caracteres dentro del arreglo cadenas
		{
			for(int i=0;i<cadena.length();i++)	// ciclo for para recorrer cada letra de cada cadena en especifico
			{
				if(cadena.charAt(i)==' ')	// verificar si tiene algun espacio
				{
					palabras++;		// si lo tiene, incremento el contador de palabras
					espacios++;		// si lo tiene, incremento la cantidad de espacios de la cadena
				}else if(cadena.charAt(i)!=' ')		// en caso de no cumplirse la anterior condicion, sucedera esta condicion
				{
					letras++;	// si se cumple, incremento la cantidad de letras de la cadena
				}
					for(int j=0;j<vocales.length();j++)		// ciclo for para comparar la cadena con las vocales
					{
						if(cadena.charAt(i)==vocales.charAt(j))		// condicion que se cumple si alguna letra de la cadena coincide con alguna vocal
						{
							cantVocal++;	// en caso de cumplirse, se incrementa el contador de vocales
						}
					}
				cantCons=(cadena.length() - espacios) - cantVocal;	// calculo la cantidad de consonantes dentro de la cadena
			}
			System.out.println("\nLa cadena '" + cadena + "' tiene: ");		// imprimo la cadena
			System.out.println("Un total de " + palabras + " palabras");	// imprimo la cantidad de palabras
			System.out.println("Un total de " + letras + " letras");	// imprimo la cantidad de letras
			System.out.println("Un total de " + cantVocal + " vocales");	// imprimo la cantidad de vocales
			System.out.println("Un total de " + cantCons + " consonantes\n");	// imprimo la cantidad de consonantes
			palabras=1;		// reinicio el contador
			espacios=0;		// reinicio el contador
			letras=0;	// reinicio el contador
			cantVocal=0;	// reinicio el contador
			cantCons=0;		// reinicio el contador
		}
		sc.close();
	}
}

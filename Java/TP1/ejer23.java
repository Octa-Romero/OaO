import java.util.Scanner;
public class ejer23 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String[] animales= {"gato","perro","loro","leon","elefante"};	// declaro el array con los animales
		String animalBusq;	// declaro variable para buscar un aniaml
		boolean encontrado = false;		// declaro un booleano para saber si el animal fue encontrado
		System.out.print("Array con 5 animales\nBuscar un animal: ");
		animalBusq = sc.nextLine();
		for(String animal : animales)	
		{
			if(animalBusq.equalsIgnoreCase(animal))		// con el equalsIgnoerCase verifico que la cadena ingresada por el usuario es la misma que algun valor dentro del array animales
			{
				encontrado=true;	// en caso de cumplirse la condicion, el booleano encontrado pasa a ser true
				break;	// una vez encontrada una coincidencia en la comparacion, salgo del bucle
			}
		}
		if(encontrado)	// si la cadena fue encontrada
		{
			System.out.println("El animal '" + animalBusq + "' se encuentra dentro del arreglo");	// imprimo mensaje de salida de que se encontro
		}else	// si no fue encontada
		{	
			System.out.println("El animal '" + animalBusq + "' no se encuentra dentro del arreglo");	// imprimo mensaje de salida de que no se encontro
		}
		sc.close();
	}

}

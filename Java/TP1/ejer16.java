import java.util.Scanner;
public class ejer16 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lado1,lado2,lado3;	// declaro variables para los tres lados del triangulo
		System.out.println("Ingrese la longitud del primer lado del triangulo: ");
		lado1 = sc.nextInt();
		System.out.println("Ingrese la longitud del segundo lado del triangulo: ");
		lado2 = sc.nextInt();
		System.out.println("Ingrese la longitud del tercer lado del triangulo: ");
		lado3 = sc.nextInt();
		if(lado1==lado2 && lado1==lado3)	// condicion para saber si todos los lados son iguales
		{
			System.out.println("El triangulo es equilatero");	// en caso de cumplirse se imprime que el triangulo es equilatero
		}else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)	// condicion que se cumple si por lo menos un lado es distinto a los otros dos
		{
			System.out.println("El triangulo es isoceles");		// en caso de cumplirse se imprime que el triangulo es isoceles
		}else if(lado1 != lado2 && lado1 != lado3)				// condicion que verifica que todos los lados son diferentes
		{
			System.out.println("El triangulo es escaleno");		// en caso de cumplirse se imprime que el triangulo es escaleno
		}
		sc.close();
	}

}

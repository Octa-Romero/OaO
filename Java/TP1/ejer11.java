import java.util.Scanner;
public class ejer11 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int anio;
		boolean divi4=false;	// booleano para saber si es divisible por 4
		boolean divi100=false;	// booleano para saber si es divisible por 100
		boolean divi400=false;	// booleano para saber si es divisible por 400
		System.out.print("Ingrese un año ");
		anio = sc.nextInt();
		if(anio % 4 == 0)	// condicion para saber si el año es divisible por 4
		{
			divi4=true;	// en caso de cumplirse, el booleano divi4 pasara a ser true
		}
		if(anio % 100 == 0)	// condicion para saber si el año es divisible por 100
		{
			divi100=true;	// en caso de cumplirse, el booleano divi100 pasara a ser true
		}
		if(anio % 400 == 0)	// condicion para saber si el año es divisible por 400
		{
			divi400=true;	// en caso de cumplirse, el booleano divi400 pasara a ser true
		}
		if((divi4 && !divi100) || divi4 && divi100 && divi400)	// condicion para saber si el año es bisiesto, verificando dos posibilidades, si el año es divisible por 4 pero no por 100, y si el año es divisible por 4, por 100 y por 400
		{
			System.out.println("El año " + anio + " es bisiesto");
		}else
		{
			System.out.println("El año " + anio + " no es bisiesto");	
		}
		sc.close();
	}

}
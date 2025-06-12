import java.util.Scanner;
public class ejer12 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num,sumaDigitos=0;	// declaro variable para el numero ingresado y un acumulador para la suma de los digitos
		System.out.print("Ingrese un numero: ");
		num = sc.nextInt();
		String numString=Integer.toString(num);	// convierto la variable de tipo int a un string
		for(int i=0;i<numString.length();i++)	// recorro todos los valores(letras) de ese string con un ciclo for
		{
			for(int j=0;j<10;j++)	// ciclo for a modo de comparacion que recorre todos los digitos posibles que puede tener un numero (0-9)
			{
				String digitos="";	// declaro variable digitos para almacenar dichos digitos
				digitos=Integer.toString(j);	// almaceno dentro del string el valor de cada digito(valor que toma j en cada iteracion)
				if(numString.charAt(i)==digitos.charAt(0))	// condicion para saber si algun digito del string numString coincide con todos los digitos posibles del 0-9
				{
					sumaDigitos=sumaDigitos + j; // en caso de cumplirse la condicion, acumulo el valor que adopto j en cada iteracion dentro del acumulador sumaDigitos
				}
			}
		}
		System.out.println("La suma de todos los digitos del numero es " + sumaDigitos);	// imprimo la suma de todos los digitos
		sc.close();
	}

}

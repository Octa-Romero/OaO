import java.util.Scanner;
public class ejer18 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int num,cont=1;		// declaro variable para el numero y un contador
		char asterisco='*';
		System.out.print("Patron de astericos\nIngrese un numero(N Filas): ");
		num = sc.nextInt();
		for(int i=0;i<num;i++)		// ciclo for para recorrer las filas ingresadas
		{
			for(int j=0;j<cont;j++)		// ciclo for para recorrer las columnas de cada fila
			{
				System.out.print(asterisco);	// imprimo los asteriscos en dicha fila 
			}
			System.out.print("\n");		// salto de linea para poder seguir con la siguiente fila
			cont++;		// incremento contador para que la siguiente fila tenga un asterisco mas
		}
		sc.close();
	}

}

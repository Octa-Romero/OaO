import java.util.Scanner;
public class ejer3 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero;
		boolean noPrimo;
		do
		{
			noPrimo=false;
			System.out.print("Ingrese un numero:");
			numero = scanner.nextInt();
			for(int i=2;i<numero;i++)
			{
				if(numero % i == 0)
				{
					noPrimo=true;
					break;
				}
			}
		}while(numero<100 || noPrimo);
		System.out.println("Saliendo del programa");
		scanner.close();
	}

}

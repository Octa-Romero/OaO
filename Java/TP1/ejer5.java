import java.util.Scanner;
public class ejer5 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero,res;
		System.out.print("Ingrese un numero del 1 al 10: ");
		numero = scanner.nextInt();
		while(numero<1 || numero>10)
		{
			System.out.println("Ingrese un numero del 1 al 10 porfavor");
			System.out.print("Ingrese un numero: ");
			numero = scanner.nextInt();
		}
		for(int i=1;i<=10;i++)
		{
			res=numero * i;
			System.out.println(numero + "x" + i + "=" + res);
		}

	}

}

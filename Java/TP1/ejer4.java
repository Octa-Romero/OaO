import java.util.Scanner;
public class ejer4 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int numero,sumPar=0,sumImpar=0;
		System.out.print("Ingrese un numero: ");
		numero = scanner.nextInt();
		while(numero<0)
		{
			System.out.println("Ingrese un numero positivo porfavor");
			System.out.print("Ingrese un numero: ");
			numero = scanner.nextInt();
		}
		for(int i=1;i<numero;i++)
		{
			if(i % 2 == 0)
			{
				sumPar=sumPar + i;
			}else
			{
				sumImpar=sumImpar + i;
			}
		}
		System.out.println("Suma de los numeros pares hasta el numero N: " + sumPar);
		System.out.println("Suma de los numeros impares hasta el numero N: " + sumImpar);
	}

}

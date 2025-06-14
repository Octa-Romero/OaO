import java.util.Random;
import java.util.Scanner;
public class ejer19 {

	public static void main(String[] args) {
		Random random = new Random();	
		Scanner sc = new Scanner(System.in);
		int opcion;
		do
		{
			int dado1,dado2,suma;	// declaro variables de tipo int
			System.out.print("\nPrograma para lanzar dos dados\n-Lanzar dados (1)\n-Salir del programa (2)\nQue desea realizar?: ");
			opcion=sc.nextInt();
			switch(opcion)
			{
				case 1:
						dado1=random.nextInt(6) + 1;	// funcion random que almacena en dado1 un valor entre 1 y 6 inclusive
						dado2=random.nextInt(6) + 1;	// funcion random que almacena en dado2 un valor entre 1 y 6 inclusive
						suma= dado1 + dado2;
						System.out.println("\nResultado del dado 1: " + dado1);		// imprimo mensaje de salida
						System.out.println("Resultado del dado 2: " + dado2);	// imprimo mensaje de salida
						System.out.println("Suma total de ambos dado: " + suma);	// imprimo mensaje de salida
					break;
			
				case 2:
					System.out.println("TERMINANDO PROGRAMA, HASTA LUEGO...");
					break;
				
				default:
					System.out.println("\nOpcion no valida, ingrese 1 o 2");
					break;
			}
		}while(opcion!=2);
		sc.close();
	}

}

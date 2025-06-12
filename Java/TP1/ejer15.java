import java.util.Scanner;
public class ejer15 {

	public static float depositarDinero(float saldo, Scanner sc)	// funcion para depositar dinero y que devuelve el valor actualizado del saldo
	{
		System.out.println("Cuanto dinero desea depositar?: ");
		float deposito = sc.nextFloat();
		saldo+=deposito;	// operador de adicion para sumarle al saldo un nuevo valor
		System.out.println("Transaccion completada con exito!\n");
		return saldo;
	}
	
	public static float retirarDinero(float saldo, Scanner sc)		// funcion para retirar dinero y que devuelve el valor actualizado del saldo
	{
		System.out.println("Cuanto dinero desea retirar?: ");
		float retiro = sc.nextFloat();
		if(retiro > saldo)
		{
			System.out.println("Lo lamento, no puedes retirar mas dinero del que tienes en tu saldo actual ($" + saldo + ")");
		}else
		{
			saldo-=retiro;	// operador de sustraccion para restarle al saldo el valor del retiro
			System.out.println("El retiro del dinero fue completado con exito!\n");
		}
		return saldo;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		float saldo=1000;
		int opcion;
		do
		{
			System.out.print("\nOpciones del Cajero Automatico Basico:\n-Deposito de dinero (1)\n-Retiro de dinero (2)\n-Consultar saldo (3)\n-Salir del programa (4)\nQue opcion desea realizar?: ");
			opcion = sc.nextInt();
			switch(opcion)	// switch case que lee las opciones que haya elegido el usuario
			{
				case 1:
					saldo=depositarDinero(saldo,sc);	// llamo a la funcion depositarDinero y la almaceno en la variable saldo
					break;
				
				case 2:
					saldo=retirarDinero(saldo,sc);		// llamo a la funcion retirarDinero y la almaceno en la variable saldo
					break;
					
				case 3:
					System.out.println("\nTu saldo actual es de: $" + saldo);	// imprimo el saldo actual
					break;
					
				case 4:
					System.out.println("\\nTERMINANDO PROGRAMA, HASTA LUEGO...");
					break;
					
				default:
					System.out.println("\\nOpcion no valida, ingrese 1, 2, 3 o 4");
					break;
			}
		}while(opcion!=4);

	}

}

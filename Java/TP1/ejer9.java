import java.util.Scanner;
public class ejer9 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num1,num2,num3;	// declaro variables de tipo int para almacenar tres valores numericos
		System.out.print("Ingrese el primer numero: ");
		num1 = sc.nextInt();
		System.out.print("Ingrese el segundo numero: ");
		num2 = sc.nextInt();
		System.out.print("Ingrese el tercer numero: ");
		num3 = sc.nextInt();
		if(num1 >= Math.max(num2, num3))	// condicion para saber si num1 es mayor o igual al numero mas grande entre num2 y num3 a traves de Math.max()
		{
			System.out.println("El numero mas grande entre los tres ingresados es: " + num1); // en caso de que la condicion se cumpla, imprimo el valor de num1
		}else if(num1 < Math.max(num2, num3))	// si la anterior condicion no se cumple, hago otra condicion para averiguar si el valor mas grande entre num2 y num3 es mas grande que num1
		{
			System.out.println("El numero mas grande entre los tres ingresados es: " + Math.max(num2, num3)); // en caso de cumplirse, imprimo el valor mas grande entre num2 y num3
		}
		sc.close();
	}
}

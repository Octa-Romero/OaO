import java.util.Scanner;
public class ejer6 {

	public static void main(String[] args) {
		String palabra="";	//
		Scanner sc=new Scanner(System.in);
		System.out.print("Ingrese una palabra: ");
		palabra=sc.nextLine();
		String palabraInvertida="";
		for(int i=palabra.length()-1;i>=0;i--)
		{
			palabraInvertida+=palabra.charAt(i);
		}
		palabraInvertida.trim();
		System.out.println(palabraInvertida);
	}

}

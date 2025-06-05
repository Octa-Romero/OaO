
public class ejer1 {

	public static void main(String[] args) {
		for(int i=1 ;i<=100;i++)				// hacer un ciclo for inicializando i como 1 e incrementarlo hasta 100 inclusive
		{							
			if(i % 2 > 0)					// condicion para saber si el numero es impar a traves del resto
			{
				System.out.println(i);			// en caso de ser verdadero imprimo el valor de dicho numero
				
			}else if(i % 2 == 0)				// condicion que se cumle cuando el numero es par
			{
				System.out.println("par");		// imprimo la palabra "par" 
			}
		}
	}

}

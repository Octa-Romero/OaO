
public class ejer2 {

	public static void main(String[] args) {
		for(int i=50 ;i<=100;i++)	// hacer un ciclo for que recorra valores desde 50 hasta 100 inclusive	
		{		
		    boolean esPrimo=true;	// declarar variable de tipo booleano para saber si es primo(inicialmente como true)
		    for(int j=2;j<i;j++)	// hacer un ciclo for que recorra valores desde el 2 hasta el valor que tenga i en esta iteracion
		    {
		        if(i % j == 0)		//condicion para averiguar si el numero es primo o no
		        {
		            esPrimo=false;	// en caso de no ser primo, el valor del booleano pasara a ser false
		            System.out.print(j + " "); //imprimo los divisores de dicho valor no primo
		        }
		    }
		    if(esPrimo)	//al salir de la comparacion en el ciclo for anterior, verifico dicho valor booleano para saber si es primo
		    {
		        System.out.print("primo\n"); //en caso de serlo, imprimo la palabra primo
		    }else{
		        System.out.print("\n"); //en caso de no serlo, hago un salto de linea para que la salida de los mensajes salga uno abajo del otro
		    }
		}

	}

}

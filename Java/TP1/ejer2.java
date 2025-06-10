
public class ejer2 {

	public static void main(String[] args) {
		for(int i=50 ;i<=100;i++)				
		{		
		    boolean esPrimo=true;
		    for(int j=2;j<i;j++)
		    {
		        if(i % j == 0)
		        {
		            esPrimo=false;
		            System.out.print(j + " ");
		        }
		    }
		    if(esPrimo)
		    {
		        System.out.print("primo\n");
		    }else{
		        System.out.print("\n");
		    }
		}

	}

}

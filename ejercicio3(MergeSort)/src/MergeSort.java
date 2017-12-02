import java.util.Arrays;
import java.util.Scanner;
public class MergeSort
{
	public static void main(String[] args) //mmain to run our program
	{
		int n;     // we create the variable n to be the size of the array
		Scanner in=new Scanner(System.in);         // create an object to keep the date
		  System.out.println("ingrese la cantidad de numeros"); // ask the value
                n=in.nextInt();    // we keep the value in n
		int A []=new int[n],i;  // we create an array, which size is n
		for(i=0;i<n;++i){       // cycle that travels the array and fill it asking for data from keyboard
		   System.out.println("ingrese numero");	//ask value
                    A[i]=in.nextInt();                          // a cada posicion le asignamos un numero 
		}
		
		System.out.println("lista original"+"\n"+Arrays.toString(A));  // we print the original list
                A=MergeSort(A);         // we call the MergeSort method that will order 
		System.out.println();   // print an space 
		for(i=0;i<n;++i)        // cicle for print the original array
		{
			System.out.print(A[i]+" ");
		}
	}
	public static int[] MergeSort(int [] A)   //ordering method
	{
		if(A.length==1)          // if the array only has one position, is already ordered, then we return the array
		return A;
                else                     // 
		{
			int n=(int) Math.floor(A.length/2); //n will be half of the array
			int B []=new int [n];                // we create an auxiliar array, which size is n 
			int C []=new int [A.length-n];       // other array C this has size half A  
			int i;
			for(i=0;i<A.length;++i)    // cycle for
			{
				if(i<n)            // si i es menor que n intercambiamos elementos de A para que queden guardados en B y asi ordenar 
					B[i]=A[i];
				else
					C[i-n]=A[i];  // si no los corremos hacia c
			}
			B=MergeSort(B);               //invocamos el metodo MergeSort para que trabaje con cada arreglo
			C=MergeSort(C);
			A=Merge(B,C);
			return A;
		}
	}
	public static int [] Merge(int [] A,int [] B) //method for ordering separate arrangements
	{
		int C []=new int [A.length+B.length]; 
		int i,a=0,b=0;
		for(i=0;i<A.length+B.length;++i)
		{
			if(a==A.length)
			{
				C[i]=B[b];
				++b;
			}
			else 
			if(b==B.length)
			{
				C[i]=A[a];
				++a;
			}
			else 
			if(A[a]>B[b])
			{
				C[i]=B[b];
				++b;
			}
			else
			{
				C[i]=A[a];
				++a;
			}
		}
		return C;		
	}
}

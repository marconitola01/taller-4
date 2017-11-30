import java.util.Arrays;
import java.util.Scanner;
public class MergeSort
{
	public static void main(String[] args) //main para correr nuestro programa
	{
		int n;   // creamos la variable n para que sea eñ tamaño deñ arreglo
		Scanner in=new Scanner(System.in); // creamos un objeto para guardar el dato
		  System.out.println("ingrese la cantidad de numeros"); // pedimos el dato
                n=in.nextInt();    // guardamos el dato en n
		int A []=new int[n],i;  // creamos un arreglo que sera de tamaño n
		for(i=0;i<n;++i)       // ciclo que recorrera el arreglo y lo llenara pidiendo datos desde teclado
		{
		   System.out.println("ingrese numero");	//pedimos los numeros
                    A[i]=in.nextInt();                          // a cada posicion le asignamos un numero 
		
		}
		System.out.println("lista original"+"\n"+Arrays.toString(A));  // imprimimos la lista original
                A=MergeSort(A);         // invocamos el metodo MergeSort que va a ordenar 
		System.out.println();   // para imprimir un espacio 
		for(i=0;i<n;++i)        // cicllo que recorre el arreglo y lo imprime (arreglo ya ordenado)
		{
			System.out.print(A[i]+" ");
		}
	}
	public static int[] MergeSort(int [] A)   //metodo que nos ordenara el arreglo
	{
		if(A.length==1)          // si el arreglo solo tiene una posicion ya esta ordenado entonces retornamos el arreglo tal cual
		return A;
                else                     // si tiene mas posiciones 
		{
			int n=(int) Math.floor(A.length/2);  // n sera la mitad del arreglo (para separar mitades)
			int B []=new int [n];                // creamos un arreglo auxiliar B y de tamaño sera n osea la mtad del arreglo A 
			int C []=new int [A.length-n];       // otro arerglo este sera C y tendra de tamaño la mitad de A  
			int i;
			for(i=0;i<A.length;++i)    // ciclo para recorrer arreglo
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
	public static int [] Merge(int [] A,int [] B) // metodo para ordenar arreglos ya separados
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
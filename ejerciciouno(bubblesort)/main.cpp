/*programa que implemente en el lenguaje c++ el metodo de ordenamiento por burbuja o bubble sort*/

#include <iostream> /*librerias*/
#include <conio.h>
using namespace std;
int main() /*main para correr nuestro programa*/
{
    
    int i, j , temp; /*variables a usar*/
    int n;/* creamos la variable n para que guarde el tamaño del arreglo*/
    cout<<"ingrese cuantos numeros va a ordenar";cin>>n; /*pedimos por teclado el tamaño del arreglo*/
	int vector[n]; /*definimos que n sera el tamaño del arreglo*/
    cout<<" Ingrese los numeros a ordenar "<<endl; /*pedimos los numeros a ordenar*/
    {
        for(i=0;i<n;i++)  //ciclo para recorrer el arreglo y llenarlo de numeros que ingrese el usuario*/
        {
            cout<<i+1<<" -> ";
            cin>>vector[i];
            cout<<endl;
        }
    }
    
    for(i=0;i<n;i++) // ciclo para recorrer el arreglo 
    {
        for(j=i+1;j<n;j++)//cilco para recorre el arreglo (j inicia en uno por que nos interesa comparar una posicion mas arriba que la de i para que sean parejas). 
        {
            if(vector[j]<vector[i])  //comparamos los elementos en sus respectivas posiciones sea j menor que i(se comparan parejas adyacentes).
            {
                temp=vector[j]; 
                vector[j]=vector[i]; // ordenamos los numeros menores en las posiciones iniciales y guardamos
                vector[i]=vector[j];  // los mayores se iran a las posiciones finales
                vector[i]=temp; 
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<vector[i]<<" "; //imprimimos el arreglo ya ordenado
    }
    system("pause"); // lo uso para que el programa no se cierre apenas terminar //
	return 0;
    
	}
	
	
	
	

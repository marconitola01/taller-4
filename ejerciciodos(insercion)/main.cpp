#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <iostream> /*librerias*/
using namespace std;
void Imprimir(int arreglo[] , int n) /*este metodo va a imprimir el arreglo ya ordenado*/
{
    cout<<"numeros ordenados de menor a mayor"<<endl;

    for(int i=0;i<n;i++)
        cout<<" "<<arreglo[i]<<" ";

}

void Insercion_Directa(int arreglo[] , int n)
{
    int i,k,aux; //variables que usaremos

    for(i=0;i<=n-1;i++) // ciclo for para recorrer el arreglo
    {

        aux=arreglo[i]; // asignamos a la variable aux(auxiliar) el valor de la posicion de i en el arreglo (seria la posicion uno)
        k=i-1;   // 
        while((k>=0) && (aux<arreglo[k])) // mientras queden posiciones y el valor de aux
        {                                 // sea menor que el de los de la izquierda, se desplaza hacia la derecha 
            arreglo[k+1]=arreglo[k];
            k=k-1;
        }
        arreglo[k+1]=aux; // ponemos al auxiliar en su sitio

    }



}

int main() //metodo main para invocar el metodo imprimir y ejecutar el programa
{

    int n; 
    string str;
    vector<int> vect;
    
    cout<<"Numero de elementos del arreglo"<<endl; //pedimos por teclado que se ingrese la cantidad de elementos que tendra el arreglo
    cin>>n; // declaramos a n 
    int num[n]; // n sera el tamaño del arreglo
   
    cout << "Digite los numeros separados por coma: \n";
    cin >> str;
    stringstream ss(str);
    int i;
    
    while (ss >> i){
        vect.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
	 for (i=0; i< vect.size(); i++){
    	num[i] = vect.at(i);
	}

    Insercion_Directa(num,n); //invocacion del metodo para ordenar el arreglo
    Imprimir(num,n); //invocacion de metodo para imprimir (arreglo ya ordenado)

    return 0;
    system("pausa");// lo usamos para que el programa no se cierra al terminar
}

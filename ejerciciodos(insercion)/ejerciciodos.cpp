#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <iostream> /*librerias*/
using namespace std;
void Imprimir(int arreglo[] , int n) /*this method print tha array already finish*/
{
    cout<<"numeros ordenados de menor a mayor"<<endl;

    for(int i=0;i<n;i++)
        cout<<" "<<arreglo[i]<<" ";

}

void Insercion_Directa(int arreglo[] , int n)
{
    int i,k,aux; //variables tu use

    for(i=0;i<=n-1;i++) // cycle for
    {

        aux=arreglo[i]; // we assign to the variable aux (auxiliary) the value of the position of i in the array (it would be position one)
        k=i-1;   // 
        while((k>=0) && (aux<arreglo[k])) // while they remain positions and the value of aux
        {                                 // is smaller than the one on the left, moves to the right
            arreglo[k+1]=arreglo[k];
            k=k-1;
        }
        arreglo[k+1]=aux; // we put the auxiliai in her possition

    }



}

int main() //method main to call the method to print and execute the program
{

    int n; 
    string str;
    vector<int> vect;
    
    cout<<"Numero de elementos del arreglo"<<endl; //We ask for the keyboard to enter the amount of elements that will have the array
    cin>>n; //  
    int num[n]; // n will be the size of the array
   
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

    Insercion_Directa(num,n); //call the method to order the arrangement
    Imprimir(num,n); //invocation of method to print (arrangement already ordered)

    return 0;
    system("pausa");// we use it to pause the program
}

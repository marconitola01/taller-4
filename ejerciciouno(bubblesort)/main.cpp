/*programa que implemente en el lenguaje c++ el metodo de ordenamiento por burbuja o bubble sort*/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <iostream> /*librerias*/
#include <conio.h>
using namespace std;
int main() /*main to run our program*/
{
    string str;
    vector<int> vect;
    int i, j , temp; /*variables to use*/
    int n;/* we create an variable n for keep the size*/
    cout<<"ingrese cuantos numeros va a ordenar";cin>>n; /*we ask for keyboard the size of the array*/
	int vector[n]; /*n will be the size of the array*/
	
    cout << "Digite los numeros separados por coma: \n"; /*ask the values*/
    cin >> str;
    stringstream ss(str);
    
    while (ss >> i){
        vect.push_back(i);
        if (ss.peek() == ',')  /*"split" to separate the numbers */
            ss.ignore();
    }
    for (i=0; i< vect.size(); i++){
    	vector[i] = vect.at(i);
	}
	
	 
    for(i=0;i<n;i++) // cycle for  
    {
        for(j=i+1;j<n;j++)//cycle to go through the arrangement (j starts in one because we want to compare a position higher than that of i to be pairs) 
        {
            if(vector[j]<vector[i])  //we compare the elements in their respective positions if j is less than i (adjacent pairs are compared)
            {
                temp=vector[j]; 
                vector[j]=vector[i]; // we order the minor numbers in the initial positions and keep
                vector[i]=vector[j];  // the biggest numbers will go to the final positions
                vector[i]=temp; 
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<vector[i]<<" "; //we print the array already ordered
    }
    system("pause"); // I use it so that the program does not close just after //
	return 0;
    
	}
	
	
	
	

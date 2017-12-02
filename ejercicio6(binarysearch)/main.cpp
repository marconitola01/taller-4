#include<iostream>
#include"conio.h"  /*librerias*/

using namespace std;

int main(){   /*main to run our program*/
	int numero;
	int puntero;
	int final;
	int mitad; 
	bool encontro = false;
	int n;                           /*variables to use*/
	cout<<"ingrese la cantidad de numeros"; /* we ask the size of the array*/
	cin>>n;                                 /* n is the size of array*/
	int vec[n];
	for(int i=0;i<n;i++){                               /*cycle for*/ 
		cout<<i+1<<" -> ";                           /*ask the values*/   
            cin>>vec[i];
            cout<<endl;
	}
	cout<<"ingrese el numero a buscar ";            /* we ask the number to work*/
	cin>>numero;                                    /* we assign the variable numero*/
	
	while(!encontro&&puntero<=final){                 /* while cycle*/
		mitad = (int)((puntero+final)/2);
		
		if(numero == vec[mitad])                 
			encontro = true;
		
	else if(numero<vec[mitad])          
	final=mitad-1;
	else
	  puntero=mitad+1;
		
	}
	if(encontro){
	cout<<"el numero se encuentra en la posicion"<<mitad+1;}
	else{
	cout<<"el dato no se encuentra";}
	
	_getch();
}

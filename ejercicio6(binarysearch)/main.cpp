#include<iostream>
#include"conio.h"

using namespace std;

int main(){
	int numero;
	int puntero;
	int final;
	int mitad;
	bool encontro = false;
	int n;
	cout<<"ingrese la cantidad de numeros";
	cin>>n;
	int vec[n];
	for(int i=0;i<n;i++){
		cout<<i+1<<" -> ";
            cin>>vec[i];
            cout<<endl;
	}
	cout<<"ingrese el numero a buscar ";
	cin>>numero;
	
	while(!encontro&&puntero<=final){
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

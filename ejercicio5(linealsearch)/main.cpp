#include<iostream>
#include "conio.h"

using namespace std;
int main(){
	int numero;
	int i=0;
	int pos;
	int n;
	bool encontro = false;
	cout<<"ingrese la cantidad de numeros";cin>>n;
	int vec[n];
	for(int i=0;i<n;i++){
		cout<<i+1<<" -> ";
            cin>>vec[i];
            cout<<endl;
	}
	cout<<"ingrese el numero que se busca";
	cin>>numero;
	
	while(!(encontro)&& i<n){
		if(numero == vec[i]){
			encontro = true;
			pos = i;
			
		}
	i=i+1;
	}
	if(encontro){
		cout<<"el dato esta en la posicion"<<pos+1;
	
	}
	_getch();
}

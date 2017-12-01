#include <vector>
#include <string>
#include <sstream>
#include <iostream>

 using namespace std;

 int busquedalineal(int array[],int tam, int valor){  //metodo busqueda lineal
 	for(int i = 0 ; i < tam ; i++){                  
 		if(valor == array [i]){
		 return i ;
		 }
	 }
	return -1;
 }
  int arreglo(int array[], int tam){
  	for(int i = 0 ; i < tam ; i++){
 		cout <<" "<<array[i]<<" \n";
	 }
  }
 
 int main (){  //main para correr programa
 	
 	int x;
 	int y;
 	
 	string str;
    vector<int> vect;
    
    cout <<"ingrese el tamaño del arreglo: " << endl;
 	cin >> x;
    int a[x];
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
    	a[i] = vect.at(i);
	}
        
 	
 	
 	cout <<"ingrese numero que desea buscar: " << endl;
 	cin >> y;

	int result = busquedalineal(a,x,y);
		
	arreglo(a,x);
	
 	if(result >= 0){
 		cout << "El numero " << a[result]<< " se encontro"
		 " en la posicion " << result+1 << endl;
	 }
	 else{
	 	cout << "El numero " << y <<" no se encontro. "<< endl;
	 }
 }

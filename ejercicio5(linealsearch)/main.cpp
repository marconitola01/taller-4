#include <vector>
#include <string>
#include <sstream>
#include <iostream> /*librerias*/

 using namespace std;

 int busquedalineal(int array[],int tam, int valor){  //method lineal search
 	for(int i = 0 ; i < tam ; i++){               //cycle for    
 		if(valor == array [i]){               
		 return i ;
		 }
	 }
	return -1;
 }
  int arreglo(int array[], int tam){          //method print the original array
  	for(int i = 0 ; i < tam ; i++){
 		cout <<" "<<array[i]<<" \n";
	 }
  }
 
 int main (){  //main for run our program
 	
 	int x;
 	int y;
 	
 	string str;
    vector<int> vect;
    
    cout <<"ingrese el tamaño del arreglo: " << endl;  //we ask the value of size
 	cin >> x;                                      // x is the size of the array
    int a[x];
    cout << "Digite los numeros separados por coma: \n";  //we ask the values
    cin >> str;
    stringstream ss(str);
    int i;
    
    while (ss >> i){                                //to separate ","
        vect.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    for (i=0; i< vect.size(); i++){
    	a[i] = vect.at(i);
	}
        
 	
 	
 	cout <<"ingrese numero que desea buscar: " << endl;  //we ask the value of number to work
 	cin >> y;                                            //assign the variable y                         

	int result = busquedalineal(a,x,y);                  // call method busquedalineal with arguments(a,x,y)  
		
	arreglo(a,x);                                        //call method with arguments (a,x)                
	
 	if(result >= 0){                                                    // si el resultado es mayor a cero operamos
 		cout << "El numero " << a[result]<< " se encontro"          // imprimimos la posicion donde se encuentra   
		 " en la posicion " << result+1 << endl;                    // el resultado sera el indice mas uno para exactitud      
	 }
	 else{
	 	cout << "El numero " << y <<" no se encontro. "<< endl;
	 }
 }

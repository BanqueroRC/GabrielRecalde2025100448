#include "iostream"

using namespace std;

int main (){
	int numero;
	
	do {
		cout<< "introduce un numero entre 1 y 5: \n";
		cin>> numero;
		
		if ( numero < 1 || numero > 5){
			cout<<"Numero invalido";
			
		}
		
} while (numero > 1 || numero <5 );
cout<<"numero correcto : "<<numero;


return 0;
}

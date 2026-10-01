#include "iostream"
#include "string"
#include "cstdlib"
using namespace std;

int main () {
	const int centinela = -1;
	float nota, contador = 0, suma = 0 ;
	cout <<"Introducir notas necesarias\nintroduzca  numero -1 para salir: ";
	cin >> nota;
	while (nota != centinela){
		contador++;
		suma+= nota;
		cout << "introduzca la siguiente nota : -1 centinela";
		cin >> nota;
	} // fin de while
	if (contador >0)
	cout << "media = " << suma / contador <<endl;
	else
	cout << " no hay notas";
	return EXIT_SUCCESS;
}

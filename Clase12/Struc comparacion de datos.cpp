//incluimos nuestras bibliotecas
#include "iostream"
#include "string"

using namespace std;
// aca inicializamos nuestra estructura con los valores que vamos a utilizar en este caso nombre y ataque para guardarlos posteriormente y utilizarlos
struct Persona {
string nombre;
int ataque;

};

int main () {
	Persona p1 = {"Maestro Roshi",236}; // Agregamos por orden nombre y ataque
	Persona p2 = {"Maestro Mutaito",230};// Agregamos por orden nombre y ataque
	
	
	// hacemos una comparacion con if midiento el "ataque" de las variables si se cumple ciertas condiciones muestra un mensaje en pantalla u otro
	if (p1.ataque > p2.ataque){
	
	
	cout<< p1.nombre<<" Con un poder de Ataque de : |"<<p1.ataque <<"| Es mas fuerte que \n"<< p2.nombre <<" Con un poder de Ataque de : |"<<p2.ataque <<"| \n";
	
	}else if (p2.ataque > p1.ataque){
	cout<< p2.nombre<<" Con un poder de Ataque de : |"<<p2.ataque <<"| Es mas fuerte que \n"<< p1.nombre <<" Con un poder de Ataque de : |"<<p1.ataque <<"| \n";
	}else{
	
	cout<<"\n Ambos tienen el mismo poder de fuerza"; // en dado caso de que tengan el mismo ataque
	}

	
	return 0;
}

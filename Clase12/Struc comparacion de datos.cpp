#include "iostream"
#include "string"

using namespace std;

struct Persona {
string nombre;
int ataque;

};

int main () {
	Persona p1 = {"Maestro Roshi",236};
	Persona p2 = {"Maestro Mutaito",230};
	
	if (p1.ataque > p2.ataque){
	
	
	cout<< p1.nombre<<" Con un poder de Ataque de : |"<<p1.ataque <<"| Es mas fuerte que \n"<< p2.nombre <<" Con un poder de Ataque de : |"<<p2.ataque <<"| \n";
	
	}else if (p2.ataque > p1.ataque){
	cout<< p2.nombre<<" Con un poder de Ataque de : |"<<p2.ataque <<"| Es mas fuerte que \n"<< p1.nombre <<" Con un poder de Ataque de : |"<<p1.ataque <<"| \n";
	}else{
	
	cout<<"\n Ambos tienen el mismo poder de fuerza";
	}

	
	return 0;
}

#include "iostream" //Agregamos bibliotecas
#include "string"

using namespace std;
/* iniciamos main , declaramos variables que vamos a usar en este caso ''a'', luego lee ''a'',
con condicional if, else if solicitamos al usuario que ingrese un numero de la semana e imprime su equivalente */
int main (){
	int a=0;
	cout<<"ingrese un dia de la semana del 1 al 7 \n";
	cin>> a;
	cout<<"\n";
	if (a==1) {
		cout<<"El numero corresponde a \n|Domingo|";
	}else if (a==2){
		cout<<"El numero corresponde a \n|Lunes|";
	}else if (a==3){
		cout<<"El numero corresponde a \n|Martes|";
	}else if (a==4){
		cout<<"El numero corresponde a \n|Miercoles|";
	}else if (a==5){
		cout<<"El numero corresponde a \n|Jueves|";
	}else if (a==6){
		cout<<"El numero corresponde a \n|Viernes|";
	}else if (a==7){
		cout<<"El numero corresponde a \n|Sabado|";
	}else {
		cout<<"||||Error numero invalido||||";
		
	}
	return 0;
	
}

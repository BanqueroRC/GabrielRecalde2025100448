//incluimos bibliotecas para funciones basicas
#include <iostream>
#include <string>

using namespace std;
//prototipado de funciones
float suma(float valor1, float valor2);
float resta(float valor1, float valor2);
float multiplicacion(float valor1, float valor2);
float division(float valor1, float valor2);

int main () {
	float valor1=0,valor2=0; //declaramos variables  e igualamos a 0
	float resultado,Rsuma,Rresta,Rmultiplicacion,Rdivision; //declaramos mas variables que usaremos despues
	cout<<"ingrese 2 numeros que esten en el rango de : |1 y 100| \n"; // Pedimos al usuario que ingrese 2 numeros entre 1 y 100 luego leemos los numeros ingresamos
	cout<<"Ingrese primer numero : \n";
	cin>> valor1;
	cout<<"Ingrese segundo numero : \n";
	cin>> valor2;
	if (valor1 > 0 && valor1 <100 && valor2 > 0 && valor2 <100) { //usando el condicial if  corroboramos  i el numero es mayor a 0 y menor que 100
		
		Rsuma = suma (valor1, valor2); //suma se copia en Rsuma
		cout<<"El resultado de la suma entre : |"<< valor1 <<"| y |"<< valor2 <<"|\n";
		cout<<" Es :|" << Rsuma <<"| \n";
		Rresta = resta(valor1,valor2); //resta se copia en Rresta
		cout<<"El resultado de la resta entre : |"<< valor1 <<"| y |"<< valor2 <<"|\n";
		cout<<"Es : |" << Rresta <<"|\n";
		Rmultiplicacion = multiplicacion(valor1,valor2); // multiplicacion se copia en Rmultiplicacion
		cout<<"El resultado de la multiplicacion entre : |"<< valor1 <<"| y |"<< valor2 <<"|\n";
		cout<<" Es : |" << Rmultiplicacion <<"|\n";
		Rdivision = division(valor1,valor2); // division se copia en Rdivision
		cout<<"El resultado de la division  entre  : |"<< valor1 <<"| y |"<< valor2 <<"|\n";
		cout<<" Es : |"<< Rdivision<<"|";
		
		
	
	}else { // si no cumple ninguna de las condiciones anteriores Retorna un error
		cout<<"Los numeros ingresados no son Validos\nLos numeros deben ser mayor a 0 y menor que 100";
	}
	return 0;
	
	
}
// Esta es la funcion de suma
float suma (float valor1, float valor2){
	return valor1+valor2;
}
// Esta es la funcion de Resta
float resta (float valor1, float valor2){
	return valor1-valor2;
}
//Esta es la funcion de multiplicacion
float multiplicacion (float valor1, float valor2){
	return valor1*valor2;
}
//Esta la funcion de Division  
float division (float valor1, float valor2){
	return valor1/valor2;
}
	



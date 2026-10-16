#include "iostream"
#include "string"
using namespace std;

int main (){
	char x;
	
	while (true) {
		cout << "Digite una vocal en minuscula para culminar el programa\n";
		cin >> x;
		if(x=='a' || x== 'e' || x== 'i' || x=='o' || x=='u'){
			cout<<"\nGracias por jugar";
			break;
		}
	}
	
	
	
	return 0;
}

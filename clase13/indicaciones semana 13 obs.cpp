#include "iostream"
#include "string"
#include "fstream"
using namespace std;
struct Personaje { // Datos del personaje
    string nombre;
    int vida;
    int ataque;
};
// Guarda un nuevo personaje
void registrarPersonaje() {
    Personaje p;
    cout << "\nRegistrar Nuevo Personaje\nDigite el nombre del personaje: \n";
    cin >> ws; // Limpia el buffer
    getline(cin, p.nombre);
    cout << "Digite los puntos de vida :\n ";
    cin >> p.vida;
    cout << "Digite los puntos de ataque:\n ";
    cin >> p.ataque;
    // Abre el archivo para agregar sin borrar lo anterior
    ofstream archivo("personajes.txt", ios::app);
    // Se fija si abrió bien el archivo
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo para escritura.\n";
        return;
    }
    // Escribe los datos en el archivo
    archivo << p.nombre << "\n" 
            << p.vida << "\n" 
            << p.ataque << "\n";

    // Cierra el archivo
    archivo.close();
    cout << "Personaje digitado y guardado...\n";
}
// Muestra todos los personajes guardados
void mostrarPersonajes() {
    // Abre el archivo para leer
    ifstream archivo("personajes.txt");
    // Se fija si abrió bien el archivo
    if (!archivo.is_open()) {
        cout << "error el archivo no existe o no se pudo abrir\n";
        return;
    }
    cout << "Lista de los personajes que se han guardado\n";
    string nombre;
    int vida, ataque;
    int contador = 1;
    // Lee los datos uno por uno
    while (getline(archivo, nombre) && archivo >> vida >> ataque) {
        // Limpia el salto de línea que queda
        archivo.ignore();

        cout << contador << ". Nombre: " << nombre 
             << " | Vida: " << vida 
             << " | Ataque: " << ataque << "\n";
        contador++;
    }
    if (contador == 1) {
        cout << "El archivo está vacío en este momento.\n";
    }
    // Cierra el archivo
    archivo.close();
}
// Menú principal
int main() {
    int opcion;
    do {
        cout << "1 Registrar nuevo personaje\n2 Ver todos los personajes guardados\n3 Salir\nDigite una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                mostrarPersonajes();
                break;
            case 3:
                cout << "\nAdios\n";
                break;
            default:
                cout << "\nOpción inválida. Por favor\n";
        }
    } while (opcion != 3);
    return 0;
}

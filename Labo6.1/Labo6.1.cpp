#include <iostream>
#include <string>

using namespace std;

class Mascota {
private:
    string nombre;
    int edad;

public:
    Mascota(string _nombre, int _edad) {
        nombre = _nombre;
        edad = _edad;
    }

    void mostrarDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << " años" << endl;
    }
};

class Perro : public Mascota {
private:
    string raza;

public:
    Perro(string _nombre, int _edad, string _raza)
        : Mascota(_nombre, _edad) {
        raza = _raza;
    }

    void mostrarRaza() {
        mostrarDatos();
        cout << "Raza: " << raza << endl;
    }
};

int main() {
    string nombre, raza;
    int edad;

    cout << "Ingrese el nombre del perro: ";
    cin >> nombre;
    cout << "Ingrese la edad del perro: ";
    cin >> edad;
    cout << "Ingrese la raza del perro: ";
    cin >> raza;

    Perro miPerro(nombre, edad, raza);
    miPerro.mostrarRaza();


    return 0;
}

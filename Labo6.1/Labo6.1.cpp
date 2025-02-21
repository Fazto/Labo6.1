#include <iostream>
#include <string>

using namespace std;

class Vehiculo {
private:
    string marca;
    int año;

public:
    Vehiculo(string marca, int año) {
        marca = marca;
        año = año;
    }

    void mostrarDatos() {
        cout << "Marca: " << marca << ", Año: " << año << endl;
    }
};

class Carro : public Vehiculo {
private:
    string combustible;

public:
    Carro(string marca, int año, string _combustible)
        : Vehiculo(marca, año) {
        combustible = _combustible;
    }

    void mostrarTipoCombustible() {
        mostrarDatos();
        cout << "Tipo de Combustible: " << combustible << endl;
    }
};

int main() {
    string marca, combustible;
    int año;

    cout << "Ingrese la marca del carro: ";
    cin >> marca;
    cout << "Ingrese el año del carro: ";
    cin >> año;
    cout << "Ingrese el tipo de combustible: ";
    cin >> combustible;

    Carro miCarro(marca, año, combustible);
    miCarro.mostrarTipoCombustible();

    return 0;
}

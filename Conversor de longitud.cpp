#include <iostream>
using namespace std;

int main() {
    double metros, resultado;
    int opcion;

    cout << "===== CONVERSOR DE LONGITUD =====" << endl;
    cout << "1. Convertir a centimetros" << endl;
    cout << "2. Convertir a kilometros" << endl;
    cout << "3. Convertir a pulgadas" << endl;
    cout << "4. Convertir a pies" << endl;

    cout << "Selecciona una opcion: ";
    cin >> opcion;

    cout << "Ingresa la cantidad de metros: ";
    cin >> metros;

    switch (opcion) {
        case 1:
            resultado = metros * 100;
            cout << metros << " metros equivalen a "
                 << resultado << " centimetros";
            break;

        case 2:
            resultado = metros / 1000;
            cout << metros << " metros equivalen a "
                 << resultado << " kilometros";
            break;

        case 3:
            resultado = metros * 39.3701;
            cout << metros << " metros equivalen a "
                 << resultado << " pulgadas";
            break;

        case 4:
            resultado = metros * 3.28084;
            cout << metros << " metros equivalen a "
                 << resultado << " pies";
            break;

        default:
            cout << "Opcion no valida";
            break;
    }

    return 0;
}
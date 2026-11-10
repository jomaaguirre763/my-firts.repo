#include <iostream>
using namespace std;

int main() {
    int opcion;
    double lado, base, altura, radio, area;
    const double PI = 3.1416;

    cout << "===== CALCULADORA DE AREAS =====" << endl;
    cout << "1. Calcular area de un cuadrado" << endl;
    cout << "2. Calcular area de un rectangulo" << endl;
    cout << "3. Calcular area de un triangulo" << endl;
    cout << "4. Calcular area de un circulo" << endl;

    cout << "Selecciona una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa el lado del cuadrado: ";
            cin >> lado;

            area = lado * lado;

            cout << "El area del cuadrado es: " << area;
            break;

        case 2:
            cout << "Ingresa la base del rectangulo: ";
            cin >> base;

            cout << "Ingresa la altura del rectangulo: ";
            cin >> altura;

            area = base * altura;

            cout << "El area del rectangulo es: " << area;
            break;

        case 3:
            cout << "Ingresa la base del triangulo: ";
            cin >> base;

            cout << "Ingresa la altura del triangulo: ";
            cin >> altura;

            area = (base * altura) / 2;

            cout << "El area del triangulo es: " << area;
            break;

        case 4:
            cout << "Ingresa el radio del circulo: ";
            cin >> radio;

            area = PI * radio * radio;

            cout << "El area del circulo es: " << area;
            break;

        default:
            cout << "Opcion no valida";
            break;
    }

    return 0;
}
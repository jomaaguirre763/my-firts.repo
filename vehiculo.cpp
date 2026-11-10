#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    cout << "--- SISTEMA DE ESTACIONAMIENTO ---" << endl;
    cout << "Tipos de vehiculo:" << endl;
    cout << "1. Moto ($12/hr)" << endl;
    cout << "2. Auto ($24/hr)" << endl;
    cout << "3. Camioneta ($30/hr)" << endl;
    
    int opcion;
    cout << "Ingrese el numero del tipo de vehiculo (1-3): ";
    cin >> opcion;
    
    double tarifa_hora = 0;
    if (opcion == 1) {
        tarifa_hora = 12;
    } else if (opcion == 2) {
        tarifa_hora = 24;
    } else if (opcion == 3) {
        tarifa_hora = 30;
    } else {
        cout << "Opcion de vehiculo no valida." << endl;
        return 1;
    }

    int horas, minutos;
    cout << "Ingrese las horas de estancia: ";
    cin >> horas;
    cout << "Ingrese los minutos adicionales de estancia: ";
    cin >> minutos;

    // Convertir todo a minutos totales para facilitar el cálculo
    int total_minutos = (horas * 60) + minutos;

    if (total_minutos <= 0) {
        cout << "El tiempo ingresado debe ser mayor a cero." << endl;
        return 1;
    }

    double total_a_pagar = 0;

    // Regla: Si tarda 1 hora (60 min) o menos, se cobra una hora completa.
    if (total_minutos <= 60) {
        total_a_pagar = tarifa_hora;
    } else {
        // Después de la primera hora, se cobra por periodos de media hora.
        int minutos_restantes = total_minutos - 60;
        
        // ceil redondea hacia arriba cada fracción de 30 minutos
        double periodos_media_hora = ceil(static_cast<double>(minutos_restantes) / 30.0);
        
        // Total de horas cobrables = 1 hora inicial + los periodos de media hora (0.5 hrs c/u)
        double horas_cobrables = 1.0 + (periodos_media_hora * 0.5);
        total_a_pagar = horas_cobrables * tarifa_hora;
    }

    // Mostrar el resultado con 2 decimales
    cout << fixed << setprecision(2);
    cout << "\n--- TICKET DE PAGO ---" << endl;
    cout << "Tiempo total: " << horas << " hora(s) y " << minutos << " minuto(s)" << endl;
    cout << "Total a pagar: $" << total_a_pagar << " MXN" << endl;

    return 0;
}
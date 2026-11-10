#include <iostream>

using namespace std;

int main() {
  int n, num, pares = 0, impares_suma = 0;

  cout << "Introduce la cantidad de numeros a leer: ";
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cout << "Introduce un numero: ";
    cin >> num;

    if (num % 2 == 0) {
      pares++;
    } else {
      impares_suma += num;
    }
  }

  cout << "Cantidad de numeros pares: " << pares << endl;
  cout << "Suma de numeros impares: " << impares_suma << endl;

  return 0;
}
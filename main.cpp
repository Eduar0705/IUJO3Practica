#include <iostream>
using namespace std;

// Función para calcular la combinatoria
long long combinatoria(int n, int k) {
    if (k > n - k) k = n - k;
    long long resultado = 1;
    for (int i = 1; i <= k; i++) {
        resultado = resultado * (n - i + 1) / i;
    }
    return resultado;
}

// Función para calcular la permutación
long long permutacion(int n, int k) {
    long long resultado = 1;
    for (int i = 0; i < k; i++) {
        resultado *= (n - i);
    }
    return resultado;
}

int main() {
    int opcion;
    do {
        cout << "Seleccione una opcion:" << endl;
        cout << "1. Calcular combinatoria" << endl;
        cout << "2. Calcular permutacion" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int n, k;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                cout << "Ingrese el valor de k: ";
                cin >> k;
                long long resultado = combinatoria(n, k);
                cout << "La combinatoria de " << n << " sobre " << k << " es: " << resultado << endl;
                break;
            }
            case 2: {
                int n, k;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                cout << "Ingrese el valor de k: ";
                cin >> k;
                long long resultado = permutacion(n, k);
                cout << "La permutación de " << n << " sobre " << k << " es: " << resultado << endl;
                break;
            }
            case 3:
                cout << "Adios!" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 3);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int positivo, negativo;

    // Solicitar un número positivo
    do {
        cout << "Ingresa un número positivo: ";
        cin >> positivo;
        if (positivo <= 0) {
            cout << "El número debe ser positivo. Intenta de nuevo." << endl;
        }
    } while (positivo <= 0);

    // Solicitar un número negativo
    do {
        cout << "Ingresa un número negativo: ";
        cin >> negativo;
        if (negativo >= 0) {
            cout << "El número debe ser negativo. Intenta de nuevo." << endl;
        }
    } while (negativo >= 0);

    // Mostrar los números ingresados
    cout << "Número positivo: " << positivo << endl;
    cout << "Número negativo: " << negativo << endl;

    return 0;
}

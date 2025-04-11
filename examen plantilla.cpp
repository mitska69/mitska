#include <iostream>
#include <windows.h>
#include <cmath>
//julio israel diaz rodriguez 24040990
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    float a, b, c, base, altura,s;

    // Entrada de datos
    cout << "Ingrese los tres lados del triángulo (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Ingrese la base y la altura del triángulo: ";
    cin >> base >> altura;

    // Validación de la desigualdad triangular usando operador ternario
    bool esTriangulo = (a + b > c) && (a + c > b) && (b + c > a);
    
   
    cout << (esTriangulo ? "Los lados forman un triángulo válido.\n" : "Error: Los lados no forman un triángulo válido.\n");

    // Cálculo del área solo si es un triángulo válido
    esTriangulo ?
        cout << "Área (Fórmula de Herón): " << sqrt(s*(a-b)*(s-b)*(s-c)) << "\n";
        cout << "Área (base * altura / 2): " << (base * altura / 2) << "\n";
     
    return 0;

}

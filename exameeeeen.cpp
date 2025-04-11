#include <iostream>
#include <cmath>
//julio israel diaz rodriguez 24040990
using namespace std;

// Función para calcular el área con la fórmula de Herón
double areaHeron(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Función para calcular el área con la fórmula base * altura / 2
double areaBaseAltura(double base, double altura) {
    return (base * altura) / 2.0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c, base, altura;
    
    // Entrada de datos para los lados del triángulo
    cout << "Ingrese los tres lados del triángulo: ";
    cin >> a >> b >> c;

    // Validación con operador ternario
    double area_heron = (a + b > c && a + c > b && b + c > a) ? areaHeron(a, b, c) : 0.0;

    // Entrada de datos para base y altura
    cout << "Ingrese la base y la altura del triángulo: ";
    cin >> base >> altura;

    // Cálculo con operador ternario
    double area_bh = (base > 0.0 && altura > 0.0) ? areaBaseAltura(base, altura) : 0.0;

    // Mostrar resultados
    printf("Área por Herón: %.2lf\n", area_heron);
    printf("Área por base y altura: %.2lf\n", area_bh);

    system("pause");
    return 0;
}
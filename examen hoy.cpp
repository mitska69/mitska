#include <iostream>
#include <cmath>

int main() {
    double a, b, c, base, altura;

    // Entrada de datos
    std::cout << "Ingrese los tres lados del triángulo (a, b, c): ";
    std::cin >> a >> b >> c;
    std::cout << "Ingrese la base y la altura del triángulo: ";
    std::cin >> base >> altura;

    // Validación de la desigualdad triangular usando operador ternario
    bool esTriangulo = (a + b > c) && (a + c > b) && (b + c > a);
    
    // Mensaje de validación
    std::cout << (esTriangulo ? "Los lados forman un triángulo válido.\n" : "Error: Los lados no forman un triángulo válido.\n");

    // Cálculo del área solo si es un triángulo válido
    esTriangulo ? (
        std::cout << "Área (Fórmula de Herón): " << sqrt((a + b + c) / 2 * ((a + b + c) / 2 - a) * ((a + b + c) / 2 - b) * ((a + b + c) / 2 - c)) << "\n";
        std::cout << "Área (base * altura / 2): " << (base * altura / 2) << "\n";
    ) : (void)0; // El (void)0 es necesario para evitar errores de sintaxis en el operador ternario

    return 0;
}

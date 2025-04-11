/*Programa que obtiene el mayor de tres números*/
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int uno, dos, tres, loquesea;
    char nombre[20];

    cout<<"INSTITUTO TECNOLOGICO DE DURANGO\n";
    cout<<"Fundamentos de Programación\n";
    cout<<"Programa que determina cuál es el menor de 3 números\n";
    cout<<"Dime tu nombre: ";
    gets(nombre);

    cout<<"Dime el primer número: ";
    cin>>uno;
    cout<<"Dime el segundo número: ";
    cin>>dos;
    cout<<"Dime el tercer número: ";
    cin>>tres;

    if (uno < dos && uno < tres) {
        loquesea = uno;
    } else {
        if (dos < uno && dos < tres) {
            loquesea = dos;
        } else {
            loquesea = tres;
        }
    }

    cout<<nombre<<", el menor de los tres números es: "<<loquesea;
    
    return 0;
}

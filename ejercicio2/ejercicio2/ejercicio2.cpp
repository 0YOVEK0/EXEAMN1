// ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main() {
    int dia, mes, year;
    cout << "Tomando en cuenta la fecha de la creacion de este programa 09/02/2023" << endl;
    cout << "Por favor ingrese su fecha de nacimiento DIA,MES,YEAR separa con espacios cada campo : ";

    cin >> dia >> mes >> year;


    int edad = 2023 - year;

    if (2 < mes || (2 == mes && 9 < dia)) {
        edad--;
    }

    cout << "Su edad es: " << edad << " YEAR" << endl;
    cout << "BY YOVEK" << endl;
    return 0;
}
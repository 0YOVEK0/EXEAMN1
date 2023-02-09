// Ejercicio3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int
main()
{

    int numero, i;

    cout << "TABLAS DE MULTIPLICAR " << endl;
    cout << "Ingrese un numero: ";

    cin >> numero;


    cout << "Tabla de multiplicacion del " << numero << ":" << endl;

    for (i = 1; i <= 10; i++)
    {

        cout << numero << " x " << i << " = " << numero * i << endl;

    }

    cout << "BY YOVEK " << endl;
    return 0;

}

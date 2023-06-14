#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    double num1, num2, resultado;
    char continuar;

    do {
        cout << "CALCULADORA" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Raíz" << endl;
        cout << "Ingrese el número de la operación que desea realizar: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = num1 + num2;
                cout << "El resultado de la suma es: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = num1 - num2;
                cout << "El resultado de la resta es: " << resultado << endl;
                break;
            case 3:
                cout << "Ingrese el primer número: ";
                cin >> num1;
                cout << "Ingrese el segundo número: ";
                cin >> num2;
                resultado = num1 * num2;
                cout << "El resultado de la multiplicación es: " << resultado << endl;
                break;
            case 4:
                cout << "Ingrese el dividendo: ";
                cin >> num1;
                cout << "Ingrese el divisor: ";
                cin >> num2;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "El resultado de la división es: " << resultado << endl;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
                break;
            case 5:
                cout << "Ingrese la base: ";
                cin >> num1;
                cout << "Ingrese el exponente: ";
                cin >> num2;
                resultado = pow(num1, num2);
                cout << "El resultado de la potencia es: " << resultado << endl;
                break;
            case 6:
                cout << "Ingrese el número: ";
                cin >> num1;
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    cout << "El resultado de la raíz es: " << resultado << endl;
                } else {
                    cout << "No se puede calcular la raíz de un número negativo." << endl;
                }
                break;
            default:
                cout << "Opción inválida. Por favor, ingrese un número del 1 al 6." << endl;
                break;
        }

        cout << "¿Desea realizar otra operación? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    return 0;
}


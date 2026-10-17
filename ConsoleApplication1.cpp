#include <iostream>
using namespace std;

int main() {
    int opcion, cantidad;

    cout << "=== CAFETERIA ===" << endl;
    cout << "1. Cafe (RD$50)" << endl;
    cout << "2. Jugo (RD$80)" << endl;
    cout << "3. Sandwich (RD$120)" << endl;
    cout << "Ingrese la opcion: ";
    cin >> opcion;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    switch (opcion) {
    case 1:
        cout << opcion << " x " << cantidad << "  ->  Total: RD$" << 50 * cantidad << endl;
        break;
    case 2:
        cout << opcion << " x " << cantidad << "  ->  Total: RD$" << 80 * cantidad << endl;
        break;
    case 3:
        cout << opcion << " x " << cantidad << "  ->  Total: RD$" << 120 * cantidad << endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }

    return 0;
}
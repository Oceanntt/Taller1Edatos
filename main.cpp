#include <iostream>
using namespace std;

int pedirOpcionValida(int minimo, int maximo) {
    int respuesta;

    cout << "Selecciona una opcion: ";
    cin >> respuesta;

    while (cin.fail() || respuesta < minimo || respuesta > maximo) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Opcion invalida. Intenta nuevamente: ";
        cin >> respuesta;
    }

    return respuesta;
}

int main() {
    int respuesta;

    cout << "=== HOSPITAL MARMAJA ===\n"
         << "1. Atender pacientes\n"
         << "2. Ver departamento\n"
         << "3. Revisar historial de atencion\n"
         << "4. Salir\n";

    respuesta = pedirOpcionValida(1, 4);
    switch (respuesta) {
    case 1:
        cout << "Atendiendo pacientes..." << endl;
        break;

    case 2:
        cout << "Mostrando departamentos..." << endl;
        break;

    case 3:
        cout << "Mostrando historial..." << endl;
        break;

    case 4:
        cout << "Saliendo..." << endl;
        break;

}


    return 0;
}
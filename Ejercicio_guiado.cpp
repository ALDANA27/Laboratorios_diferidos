#include <iostream>
#include <windows.h>

using namespace std;
int dia;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    cout << "Ingrese un número del 1-7" << endl;
    cin >> dia;

    switch (dia)
    {
    case 1:
        cout << "Lunes";
        break;
    case 2:
        cout << "Martes";
        break;    
    case 3:
        cout << "Miercoles";
        break;   
    case 4:
        cout << "Jueves";
        break;    
    case 5:
        cout << "Viernes";
        break;    
    case 6:
        cout << "Sabado";
        break;    
    case 7:
        cout << "Domingo";
        break;
    default:
        cout << "Opción no valida";
        break;
    }

return 0;

}
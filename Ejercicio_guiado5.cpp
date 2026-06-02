/*
1. Si la nota es **90 o más**, mostrar: "Excelente, ¡aprobado con honores!".
2. Si la nota está entre **60 y 89**, mostrar: "Buen trabajo, ¡aprobado!".
3. Si la nota es **menor a 60**, mostrar: "Lo siento, no has aprobado. Necesitas estudiar más".
*/

#include <iostream>
using namespace std;
int n1;

int main () {

    cout << "Ingresar nota: ";
    cin >> n1;
    if (n1 >= 90)
    {
        cout << "Excelente, aprobado con honores!";
    }
    else if (n1 <= 89 && n1>=60)
    {
        cout << "Buen trabajo, aprobado!";

    } else { 
        cout << "Lo siento, no has aprobado. Necesitas estudiar mas";
    }    
    
    return 0;
}
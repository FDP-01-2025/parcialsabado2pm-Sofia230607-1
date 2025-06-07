#include <iostream>
using namespace std;

int main(void){
    int menu, libro, usuario, numcarnet;

    cout << "Sistema de gestión de biblioteca" << endl;
    cout << "Ingrese su nombre de usuario: " << endl;
    cin >> usuario;
    cout << "Inrese su numero de carnet: " << endl;
    cin >> numcarnet;

    switch (menu)
    {
    case 1:
        Prestar libro 
        break;
    
    case 2:
        Devolver libro
        break;

    case 3:
        Salir
        break;

    default: Error
        break;
    }

    cout << "Exitos" << edl;
    return 0;
}
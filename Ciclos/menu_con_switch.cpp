#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main(){
    int respuesta;

    do{
        system("cls");
        cout << "[1] Opcion 1" <<endl;
        cout << "[2] Opcion 2" <<endl;
        cout << "[3] Opcion 3" <<endl;
        cout << "[4] Opcion 4" <<endl;
        cout << "[5] Salir" <<endl;
        cout << "Elige una opcion: ";
        cin >> respuesta;

        //Empieza a evaluar el valor de la variable respuesta
        switch(respuesta){
            case 1:
                cout << "Elegiste opcion 1. Presiona cualquier tecla para continuar";
                //getch() crea una pausa y continua hasta que se presione cualquier tecla
                getch();
                break;
            case 2:
                cout << "Elegiste opcion 2. Presiona cualquier tecla para continuar";
                getch();
                break;
            case 3:
                cout << "Elegiste opcion 3. Presiona cualquier tecla para continuar";
                getch();
                break;
            case 4:
                cout << "Elegiste opcion 4. Presiona cualquier tecla para continuar";
                getch();
                break;
            case 5:
                cout << "Saliendo...";
                break;
            default: cout << "Opcion incorrecta. ";
        }
    }
    while(respuesta!=5);
    return 0;
}

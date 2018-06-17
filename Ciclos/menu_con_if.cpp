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

        if(respuesta==1){
            cout << "Elegiste opcion 1. Presiona cualquier tecla para continuar";
            //getch() crea una pausa y continua hasta que se presione cualquier tecla
            getch();
        }
        else if(respuesta==2){
            cout << "Elegiste opcion 2. Presiona cualquier tecla para continuar";
            getch();
        }
        else if(respuesta==3){
            cout << "Elegiste opcion 3. Presiona cualquier tecla para continuar";
            getch();
        }
        else if(respuesta==4){
            cout << "Elegiste opcion 4. Presiona cualquier tecla para continuar";
            getch();
        }
        else if (respuesta==5){
            cout << "Saliendo...";
        }
        else{
            cout << "Opcion incorrecta. ";
        }
    }
    while(respuesta!=5);
    return 0;
}

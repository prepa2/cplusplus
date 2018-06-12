#include <iostream>

using namespace std;

int main(){
    int dia;

    cout << "Ingresa el numero del dia de la semana: ";
    cin >> dia;

    if(dia==1){
        cout << "Lunes";
    }
    else if (dia==2){
        cout << "Martes";
    }
    else if (dia==3){
        cout << "Miercoles";
    }
    else if (dia==4){
        cout << "Jueves";
    }
    else if (dia==5){
        cout << "Viernes";
    }
    else if (dia==6){
        cout << "Sabado";
    }
    else if (dia==7){
        cout << "Domingo";
    }
    else{
        cout << "Solo puedes ingresar numeros del 1 al 7.";
    }

    return 0;
}

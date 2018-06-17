#include <iostream>

using namespace std;

int main(){
    int calificacion=0, suma=0, n=0;
    string materias[5]={"matematicas", "geografia", "biologia", "ciencias","ingles"};

    while(n<5){
        cout << "Calificacion de " <<materias[n] <<": ";
        cin >> calificacion;

        suma=suma+calificacion;
        n++;
    }

    cout << "El promedio es: " << suma/5;

    return 0;
}

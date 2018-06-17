#include <iostream>

using namespace std;

int main(){
    int calificacion=0, suma=0;

    for(int i=1;i<=5;i++){
        cout << "Calificacion de la materia " <<i <<": ";
        cin >> calificacion;

        suma=suma+calificacion;
    }

    cout << "El promedio es: " << suma/5;

    return 0;

}

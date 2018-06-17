#include <iostream>

using namespace std;

int main(){
    int calificacion=0, suma=0, n=1;

    while(n<=5){
        cout << "Calificacion de la materia " <<n <<": ";
        cin >> calificacion;

        suma=suma+calificacion;
        n++;
    }

    cout << "El promedio es: " << suma/5;

    return 0;
}

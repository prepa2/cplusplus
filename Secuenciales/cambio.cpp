#include <iostream>

using namespace std;

int main(){
    int cantidad;

    cout <<"Cantidad de dinero a fraccionar: ";
    cin >> cantidad;

    cout <<endl<<endl;

    cout << "Monedas de 20: " <<cantidad/20 <<endl;
    cantidad=cantidad%20;

    cout << "Monedas de 10: " <<cantidad/10 <<endl;
    cantidad=cantidad%10;

    cout << "Monedas de 5: " <<cantidad/5 <<endl;
    cantidad=cantidad%5;

    cout << "Monedas de 1: " <<cantidad/1 <<endl;
    cantidad=cantidad%1;

    return 0;

}

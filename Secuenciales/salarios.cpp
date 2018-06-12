#include <iostream>

using namespace std;

int main (){
    float horastotales, hraextras, extras, salario, hora;
    char nombre[20];

    cout <<endl;
    cout << "Cual es tu nombre? ";
    cin.getline(nombre,20);

    cout<< "Hola "<<nombre <<", cual es tu salario por hora: ";
    cin >> hora;

    cout << "Cuantas horas se trabajaron en la semana: ";
    cin >> horastotales;

    hraextras = horastotales - 40;

    cout <<endl<<endl;
    salario = 40 * hora;
    extras = hraextras * hora * 2;
    cout << "Salario: $" << salario << endl;
    cout << "Horas extras: $" << extras << endl;
    cout << "Total: $" << salario + extras;

    cout <<endl<<endl;
}

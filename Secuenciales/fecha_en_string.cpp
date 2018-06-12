#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main(){
    string fecha;
    int d,m,y;

    cout << "Escribe la fecha en formato dd:mm:aaaa  ";
    cin >> fecha;

    /*substr es una funcion de la biblioteca string para partir cadenas (strings).
    El primer numero dentro del parentesis indica desde que posicion va empezar a cortar
    la cadena, y el segundo numero indica cuentas posiciones va a leer.*/

    /*la funcion 'atoi' sirve para convertir la subcadena de texto a un valor numero,
    y poder asignar los numeros a las variables int declaradas d,m,y*/

    //Corta la cadena desde la posicion 0 y a partir de ahi, toma dos posiciones
    d = atoi(fecha.substr(0,2).c_str());

    //Corta la cadena desde la posicion 3 y a partir de ahi, toma dos posiciones
    m = atoi(fecha.substr(3,2).c_str());

    //Corta la cadena desde la posicion 3 y a partir de ahi, toma dos posiciones
    y = atoi(fecha.substr(6,4).c_str());

    cout << "Dia: " << d <<endl;
    cout << "Mes: " << m <<endl;
    cout << "A"<<char(164)<<"o: "<< y <<endl;
}

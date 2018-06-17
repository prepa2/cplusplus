#include <iostream>

using namespace std;

int main(){
    float pago=0, subtotal=0, iva=0, total=0, descuento=0;
    float producto1=0, producto2=0, producto3=0;

    cout << "Precio producto 1: ";
    cin >> producto1;
    cout << "Precio producto 2: ";
    cin >> producto2;
    cout << "Precio producto 3: ";
    cin >> producto3;
    cout << "Con cuanto vas a pagar: ";
    cin >> pago;

    subtotal=producto1+producto2+producto3;
    iva=subtotal*0.15;
    total=subtotal+iva;
    descuento=((total)*20)/100;

    cout <<"El Subtotal de tu compra es: " <<subtotal<<endl;
    cout <<"El IVA es: " <<iva<<endl;
    cout <<"El Total: "<<total<<endl;
    cout <<"Descuento: " << descuento<<endl;
    cout <<"El Total Final es: "<<total-descuento<<endl;
    cout <<"Con cuanto pagas? "<<pago<<endl;
    cout <<"Tu cambio es: "<<pago-(total-descuento)<<endl<<endl;;
    cout <<"Gracias por tu Compra!"<<endl;

    return 0;

}

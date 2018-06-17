#include <iostream>

using namespace std;

int main(){
    int n=0, contador=0;

    cout << "Hasta que numero quieres mostrar: ";
    cin >> n;
    while(contador<=n){
        cout << contador <<", ";
        contador+=2;
    }
    return 0;
}

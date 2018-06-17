#include <iostream>

using namespace std;

int main(){
    int n=0;

    cout << "A partir de que numero quieres mostrar: ";
    cin >> n;

    while(n>=0){
        cout << n <<", ";
        n-=2;
    }
    return 0;
}

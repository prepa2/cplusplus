#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

int main(){
    int d,m,a;
    bool bisiesto=false;
    string fecha;

    cout <<"Introduce la fecha en formato dd/mm/aaaa: ";
    cin >> fecha;

    d = atoi(fecha.substr(0,2).c_str());
    m = atoi(fecha.substr(3,2).c_str());
    a = atoi(fecha.substr(6,4).c_str());

    //Calcular si el año ingresado es bisiesto.
    if(a%4==0 && a%100!=0){
        bisiesto=true;
    }

    if(d>0 && d<32 && m>0 && m<13 && a>0){
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            cout << "Fecha valida"<<endl;
        }
        else{
            if(m==2 && d<30 && bisiesto){
            cout << "Fecha valida"<<endl;
            }
            else{
                if(m==2 && d<29 && !bisiesto){
                    cout << "Fecha valida" <<endl;
                }
                else{
                    if(m!=2 && d<31){
                        cout <<"Fecha valida" <<endl;
                    }
                    else{
                        cout<<"Fecha invalida" <<endl;
                    }
                }
            }
        }
    }
    else{
        cout <<"Fecha invalida" <<endl;
    }

    return 0;
}

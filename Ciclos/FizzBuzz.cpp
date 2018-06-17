#include <iostream>

using namespace std;

int main(){
    int n=1;

    while(n<=20){
        if(n%5==0 && n%3==0){
            cout << "FizzBuzz"<<endl;
        }
        else if(n%3==0){
            cout << "Fizz"<<endl;
        }
        else if(n%5==0){
            cout << "Buzz"<<endl;
        }
        else{
            cout << n <<endl;
        }
        n++;
    }

    return 0;
}

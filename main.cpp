#include <iostream>
#include "lib.h"

using namespace std;
int main(){
    int numero=0;
    cin>> numero;
    if(primi(numero, numero-1)== true) {
        cout << "numero primo";
    }else{
        cout<<"numero non primo";

    }
return 0;
}

include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int a;
    int b=1;
    cin>>a;
    if( numeriprimi(a,b)== false ){
        cout << "numero non primo";
    }else {
        cout<<"numero primo";
    }
    return 0;
}

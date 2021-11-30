#include "lib.h"
bool primi(int numero, int divisore){
    if(numero<0){
        return false;
    }else if(divisore==1){
        return true;
    }else if(numero%divisore==0){
        return false;
    }
    primi(numero,--divisore);

}


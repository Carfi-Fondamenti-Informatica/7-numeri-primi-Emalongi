//
// Created by Utente on 29/11/2021.
//

#include "lib.h"
bool numeriprimi (int a=2,int b=1){

    if(a==2){
        return true;
    }else if(a>2 and b<a){
        if(a%(a-b)==0){
            return false;
        }else if(b<a){
            numeriprimi(a,++b);
            return true;
        }

    }
}

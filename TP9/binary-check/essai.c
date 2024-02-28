#include "stdint.h" 
#include "checked-int.h"
#include <stdio.h>



int   ci_check(uint64_t value){
    
    unsigned char c = value & 0xFF00;

printf("%x",c[0]);
}

int main (){
    ci_check(155);


return 0;
}
#include "stdint.h" 
#include "checked-int.h"
#include <stdio.h>
uint64_t ci_encode(uint32_t value){
   uint64_t v2 = value; 
   v2 = v2 << 32;
   v2 = v2 + value;
   printf("%lx \n",v2);
   return v2;

}

int   ci_check(uint64_t value){
    uint32_t v1 = value;
    uint32_t v2 = value>> 32;
     if (v1 ^ v2){
        return 0;
     }
     else {
        return 1;
     }

}




uint32_t ci_decode(uint64_t value, int *ok){   
    uint32_t v1 = value;
    uint32_t v2 = value >> 32;
    printf("%x %x \n",v1,v2);
    if (v1 != v2){ 
        if(ok!=NULL){
            *ok=0;
        }
        if (v2 < v1){
            return v2;
        }
        else {
            return v1;
        }
    }
    else{
        if(ok!=NULL){
            *ok=1;
        }
        return v1;
    }

}
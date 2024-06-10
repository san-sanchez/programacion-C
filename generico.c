#include "header.h"

void *mem_cpy(void *dest,const void *orig, size_t tam)
{
    void *aux=dest;

    while(tam--){
      *((char *)dest++) = *((char*)orig++);
    }
    return aux;
}
void *memmove(void *dest,const void *orig, size_t tam)
{
    void *aux=dest;

    if(orig>=dest){

        while(tam--){
           *((char*)dest++)=*((char*)orig++);
        }
    }else{
        *((char *)dest)=(char *)dest + tam-1;
        *((char *)orig)=(char *)orig + tam-1;

        while(tam--){
            *((char*)dest--)=*((char*)orig--);
        }
    }
    return aux;
}

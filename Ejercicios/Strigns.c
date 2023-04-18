unsigned StrLen(const char*vec){
unsigned i=0;
do{
    vec++;
    i++;
}while(*vec);
return i;
}
char *StrCpy(char*vec1,const char*vec){
while(*vec)
    {
    *vec1=*vec;
    vec++;
    vec1++;
    }
    *vec1='\0';
    return vec1;
}
int StrCmpi(const char *s1, const char *s2){
int retorno=1;
    while(*s1&&StrLen(s1)==StrLen(s2)){
        if(tolower(*s1)==tolower(*s2)){
            retorno=0;
        }
        s1++;
        s2++;
    }
return retorno;
}
int StrCmp(const char *s1, const char *s2){
int retorno=1;
    while(*s1&&StrLen(s1)==StrLen(s2)){
        if(*s1==*s2){
            retorno=0;
        }
        s1++;
        s2++;
    }
return retorno;
}
int strncmp(const char *s1, const char *s2, unsigned n){
int retorno=1;
    while(*s1){
        if(*s1==*s2){
            retorno=0;
        }
        s1++;
        s2++;
    }
return retorno;
}
char *StrCat(char*s1, const char *s2){
while(*s1){s1++;}
while(*s2){
    *s1=*s2;
    s1++;
    s2++;
}
s1='\0';
return s1;
}
char *strstr(const char *s1, const char *s2){
const char *lectura_s1=s1,*lectura_s2=s2;
char*pos;
while(*lectura_s1){
    if(*lectura_s1==*lectura_s2){
    pos=lectura_s1;
        while(*s2){
         if(*lectura_s1==*lectura_s2&&*lectura_s1&&*lectura_s2){
           lectura_s1++;
           lectura_s2++;
         }
        }
    }
    if(*lectura_s2=='\0'){return pos;}
    lectura_s1++;
    lectura_s2=s2;
}
return 0;
}
unsigned contadorPalabra(const char*vec,const char*palabra){
char *ptrPalabra=palabra;
unsigned cantidad=0;
while(*vec){
        if(*vec==*ptrPalabra){
            while(*ptrPalabra&&*ptrPalabra==*vec){
                ptrPalabra++;
                vec++;
            }
            if(*ptrPalabra=='\0'){cantidad++;}

        }
    vec++;
    ptrPalabra=palabra;
}
return cantidad;
}


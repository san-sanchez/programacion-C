 void Division(unsigned numerador,unsigned denominador,unsigned *cociente,unsigned *resto){
 if(denominador==0){
    *cociente=0;
    *resto=0;
 }else{
    *cociente=numerador/denominador;
    *resto=numerador%denominador;
 }
 return;
}
unsigned sucecionNaturales(unsigned numero){
    unsigned i=0,suma=numero;
    do{
        suma+=i;
        i++;
    }while(i<numero);
    return suma;
}
unsigned sucecionNaturalesPares(unsigned numero){
    unsigned i=0,suma=numero;
    do{
        if(i%2==0){
            suma+=i;
        }
        i++;
    }while(i<numero);
    return suma;
}
unsigned numerosPrimos(unsigned numero){
unsigned j=1,resultado;
    do{
        if(numero%1==0&&numero%j){
            resultado=1;
        }else{
            resultado=0;
        }
    }while(j<=numero);
return resultado;
}
unsigned validarRangoINT(int inicio,int fin, int valor){
    return(valor>=inicio&&valor<=fin)?1:0;
}
void insertElement(int valor,int *vec,unsigned posicion,int tam){
//creamos  una variable axiliar que almacene la direccion de vec
int *direccion=vec;
int i;
for(i=0;i<tam;i++){
    if(i==posicion-1){
// vec apunta a la direccion del principio es cambiado por la dirrecion actual
        vec=direccion;
        // al valor que apunta lo cambiamos por el pedido
        *vec=valor;
    }
    //incremento la direccion
    direccion++;
}
return;
}
void insertElementUP(int valor,int *vec,int tam){
int *actual=vec,*siguiente=vec,auxiliar,a1=0,a2=0;
int i,j,nuevo=valor;

for(j=0;j<tam-1;j++){
    for(i=0;i<tam-1;i++){
    siguiente++;
    if(*actual>*siguiente){
        auxiliar=*actual;
        *actual=*siguiente;
        *siguiente=auxiliar;
    }
    actual++;
}
siguiente=vec;
actual=vec;
}
return;
}

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "basicos.h"
#include "Punteros.h"
#define Tam 6
unsigned validarRango(int a,int b);
int main(){
    int valor,vec[Tam]={6,1,7,4,27,2},i;
//Ejercicio 9) solucionar tema del cociente
    system("cls");
    /*unsigned numerodor,denominador,cociente,resto;
    printf("ingrese numerador\n");
    fflush(stdin);
    scanf("%i",&numerodor);
    printf("ingrese denominador\n");
    fflush(stdin);
    scanf("%i",&denominador);
    Division(numerodor,denominador,&cociente,&resto);
    printf("\033[0;31m");
    printf("COCIENTE:%i\t RESTO:%i\n",cociente,resto);
    printf("\033[0;0m");
     printf("ingrese numerador\n");
   unsigned resultado,numero;
   printf("--ingrese un numero--\n");
   fflush(stdin);
   scanf("%i",&numero);
   resultado=sucecionNaturales(numero);
   printf("\033[0;33m");
   printf("RESULTDO:\t%i",resultado);*/
   printf("\033[0;33m");
   /*do{
    printf("ingrese valor a insetar\n");
    fflush(stdin);
    scanf("%d",&valor);
    printf("ingrese posicion\n");
    fflush(stdin);
    scanf("%d",&posicion);
   }while(validarRangoINT(1,Tam,posicion)!=1);*/
   printf("ingrese valor a insetar\n");
    fflush(stdin);
    scanf("%d",&valor);
   insertElementUP(valor,vec,Tam);
   for(i=0;i<Tam;i++){
    printf("%d|",vec[i]);
   }
   return 0;
}


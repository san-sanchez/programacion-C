
#include "prototipo.h"

//Desarrollar una función que elimine todas las apariciones de un determinado elemento de un arreglo
//de enteros

int delete_int(int *vec,int element,int ce)
{
    int *ptr=vec;
    int *fin=vec+ce;
    int total=0;

    while(ptr<fin)
    {
        if(*ptr==element)
        {
            reduce_vec_int(ptr,fin--);
            total++;
            fin--;
        }
        vec++;
    }
    return total;
}
 void reduce_vec_int(int *vec,int *fin)
 {
    while(vec<fin)
     {
        *vec=*(vec + 1);
        vec++;
     }
 }
int delete_vec(void *vec,size_t tam,size_t *ce,cmp comparar)
{
    void *ptr_leer=vec;
    void *ptr_escribir=vec;
    size_t ciclo=*ce;
    int total=0;

    while(ciclo--)
    {
        if(comparar(ptr_leer))
        {
            if(ptr_leer!=ptr_escribir)
            {
                memmove(ptr_escribir,ptr_leer,tam);
                ptr_escribir+=tam;
                total++;
            }else{
                (*ce)--;
            }
        }
        ptr_leer+=tam;
    }
    return total;
}
//Desarrollar una función que determine si una cadena de caracteres es un palíndromo.
int Esletra(const char *cad)
{
    if((*cad>='a' && *cad<='z')||(*cad>='A' && *cad<='Z'))
    {
        return TODO_OK;
    }
    return ERROR;
}
 int palindromo(char *cad)
 {
     char *inicio = cad;
     char *fin = cad + (my_strlen(cad)-1);

     while(inicio<fin)
     {
         if(!Esletra(inicio))
         {
            inicio++;
         }
        if(!Esletra(fin))
         {
            fin++;
         }

        if((*inicio==*fin)||((*inicio+('a'-'A'))==(*fin-('a'-'A')))||((*inicio-('a'-'A'))==(*fin+('a'-'A'))))
        {
            inicio++;
            fin++;
        }else{
            return ERROR;
        }
     }
     return TODO_OK;

 }
 size_t my_strlen(const char *cad)
 {
     size_t total=0;
     while(*cad)
     {
         cad++;
         total++;
     }
     return total;
 }
/*Desarrollar una función que cuente el número de apariciones de una palabra dentro de una cadena
de texto. Para ello la función recibe como parámetros dos punteros a char. El primero corresponde al
texto, el segundo corresponde a la cadena buscada. La función debe retornar el número de
ocurrencias. Contemple las condiciones de borde y haga un listado de éstas.*/
int CountWord(const char *cad, const char *word)
{
    int contador=0;
    const char *ptr_inicio=word;
    const char *ptr_fin=word + (my_strlen(word)-1);
    while(*cad)
    {
        while(*cad==*word)
        {
            cad++;
            word++;
        }
        if(word==ptr_fin)
        {
            contador++;
        }
        word=ptr_inicio;
        cad++;
    }
    return contador;
}
/*
La siguiente línea “Nj qemh v ljs kraenkqbres; lj oqe qemh es oqevorme sgn ellhs --Istqt Asdmgj” ha
sido ofuscada para impedir su lectura desplazando desplazado hacia atrás dentro del grupo
"abcdghijkoqtuv" tantos caracteres como posición tiene en la palabra.
Ejemplo, si la palabra es “hola”
● "h":un lugar atrás porque es la primera letra de la palabra, queda "g"
● "o":dos lugares atrás, queda "j"
● "l":No figura en grupo, no se modifica, queda "l"
● "a":cuatro lugares hacia atrás, queda "q", antes de la “a” está la “v”.
Quedando una vez ofuscada como “gjlq”.
● No considere ningún carácter que no figura dentro del grupo
● Una palabra es todo conjunto de uno o mas caracteres que responden a la función isalpha
● La frase desofuscada esta en Español.
*/
char *OfuscarCadena(const char *cifrado,char *cad)
{
    char *ptr_inicio=cad;
    char *ptr_fin=cad;
    while(*ptr_fin)
    {
        if(!Esletra(ptr_fin))
        {
            Ofuscarlinea(ptr_inicio,ptr_fin,cifrado);
        }
        ptr_inicio=ptr_fin;
        ptr_fin++;
    }
}
void ofuscarPalabra(char *inicio,char *ptr_fin,char *cifrado)
{
    char *ptr_inicio=inicio;
    int pos;
    while(ptr_inicio<ptr_fin)
    {
        if(!Esletra(ptr_inicio))
        {
            char *letra=cifrado;
            while(*letra && *ptr_inicio!=letra)
            {
                letra++;
            }
            if(*letra)
            {
                pos = (letra - cifrado + 1);
                *(palabra)+=(cifrado - pos);
            }
        }

        ptr_inicio++;
    }

}

/*Se dispone de una matriz cuadrada de enteros de orden N, donde cada elemento [i][j] representa la
cantidad de puntos que obtuvo el equipo i frente al equipo j al fin de un torneo de fútbol (partidos
de ida y vuelta) en el que participaron N equipos. El sistema de puntuación es: 3 puntos para el
ganador del partido y ninguno para el perdedor; 1 punto para cada equipo en caso de empate.
Desarrollar una función que determine si la matriz está correctamente generada.
Desarrollar una función que genere un arreglo de N elementos tal que cada elemento V[k] contenga
la cantidad de puntos obtenidos por el equipo k.*/
void Tabla(int **mat,size_t N)
{
    size_t f,c;
    for(f=0;f<N;f++)
    {
        for(c=0;c<N;c++)
        {
            if(mat[f][c+1]==1&&mat[c+1][f]==)
        }
    }
}

#ifndef PROTOTIPO_H_INCLUDED
#define PROTOTIPO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERROR 0
#define TODO_OK 1

typedef int cmp(void *value);

int delete_vec(void *vec,size_t tam,size_t *ce,cmp comparar);
int delete_int(int *vec,int element,int ce);
void reduce_vec_int(int *vec,int *fin);
size_t my_strlen(const char *cad);
int Esletra(const char *cad);
int CountWord(const char *cad, const char *word);
#endif // PROTOTIPO_H_INCLUDED

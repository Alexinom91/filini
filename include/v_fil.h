#ifndef V_FIL_H
#define V_FIL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struttura file 
typedef struct 
{
    int sign;        // Segno del numero: 1 per positivo, -1 per negativo
    size_t length;   // Lunghezza dell'array di cifre
    int *digits;     // Array dinamico di cifre
}_baseFil;


#endif
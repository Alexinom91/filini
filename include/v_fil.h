#ifndef V_FIL_H
#define V_FIL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//tipo array dinamico
typedef unsigned long lent;

//struttura file 
typedef struct 
{
    bool sign;        // Segno del numero: 1 per positivo, -1 per negativo
    size_t length;   // Lunghezza dell'array di cifre
    lent *digits;     // Array dinamico di cifre
}v_fil;


#endif
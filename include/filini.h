#ifndef FILINI_H
#define FILINI_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "init_fil.h"
#include "set_fil.h"

//base types used in the __struct_fil
typedef unsigned long lent; //array per type

//I choose to do like that because ive a close amount of choise
//typedef int sign_t;

typedef enum
{
    EMPTY,
    POSITIVE,
    NEGATIVE,
    ZERO
}sign_t;

typedef struct  //main structor of our var
{
    sign_t sign;    // sign of the variable
    size_t length;    //lenght of the array
    lent *digits;     // dynamic array
}__struct_fil;



//definition of structs where we are working on
typedef __struct_fil fil[1];    //main type to use => its in an array with an only element to be easier  to give to the functions
//------------------------------------
typedef __struct_fil *ptr_fil;  //pointer to the struct
typedef const __struct_fil *srcptr_fil; //pointer to the struct that is usefull in the functions

#endif
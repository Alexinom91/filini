#ifndef FILINI_H
#define FILINI_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <assert.h>
#include <stdint.h>
#include <stddef.h>
#include "round_up_fil.h"
#include "init_fil.h"
#include "set_fil_d.h"
#include "set_fil.h"
#include "check_init_fil.h"
#include "check_init_fil_2.h"
#include "round_down_fil.h"

//base types used in the __struct_fil
typedef unsigned long lent; //array per type
typedef int expo;
//I choose to do like that because ive a close amount of choise
//typedef int sign_t;

typedef enum
{
    EMPTY,
    POSITIVE,
    NEGATIVE,
    ZERO
}sign_t;

typedef enum
{
    R_DOWN,  //round down "ITA: arrotonda per difetto"
    R_UP,    //round up "ITA: arrotonda per eccesso"
    R_TO_ZERO//round to zero "ITA: arrotondamento per troncamento"
}round_fil_type;


typedef struct  //main structor of our var
{
    sign_t sign;    // sign of the variable
    size_t length;    //lenght of the array
    expo expoent;      //bit exponent
    bool flag;          
    lent *digits;     // dynamic array
}__struct_fil;
 


//definition of structs where we are working on
typedef __struct_fil fil[1];    //main type to use => its in an array with an only element to be easier  to give to the functions
//------------------------------------
typedef __struct_fil *ptr_fil;  //pointer to the struct
typedef ptr_fil *ptr_ptr_fil;  //pointer to the struct
typedef ptr_ptr_fil *ptr_ptr_ptr_fil;  //pointer to the struct
typedef const __struct_fil *srcptr_fil; //pointer to the struct that is useful in the functions

#endif
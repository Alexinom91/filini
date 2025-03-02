#include "../include/init_fil.h"

void init_fil(ptr_fil var, size_t length)
{   var->sign=EMPTY;
    var->length=length;
    size_t length_bytes = (length + 7) / 8;
    var->digits=(char*)calloc(length_bytes, sizeof(char));
}


#include "../include/init_fil.h"

void init_fil(ptr_fil var, size_t length)
{   var->sign=EMPTY;
    var->length=length;
    var->flag=false;
    int  word_size = sizeof(lent) * 8;
    int num_words=(length + word_size - 1) / word_size;
    var->digits=(lent *)calloc(num_words, sizeof(lent));
}


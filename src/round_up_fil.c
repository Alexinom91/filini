#include "../include/round_up_fil.h"
#include "../include/filini.h"
#include <stdbool.h>
void round_up_fil(ptr_ptr_fil var)
{
    if(check_init_fil_2(var)==false)
    {
        
            //need to do the round up
            unsigned long mask = 1UL;
            (*var)->digits+=mask;
            if((*var)->digits>ULONG_MAX)
                (*var)->digits=0;
        
    }
}
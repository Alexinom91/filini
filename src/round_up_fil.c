#include "../include/round_up_fil.h"

void round_up_fil(ptr_fil *var)
{
    if(check_init_fil_2(&var)==false)
    {
        
            //need to do the round up
            unsigned long mask = 1UL;
            (*var)->digits+=mask;
            if((*var)->digits>ULONG_MAX)
                (*var)->digits=0;
        
    }
}
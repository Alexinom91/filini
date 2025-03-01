#include "set_fil.h"


void set_fil_d(ptr_fil var, double input)
{
    if(input>(double)0)
        var->sign=POSITIVE;
    if(input<(double)0)
        var->sign=NEGATIVE;
    if(input==(double)0)
        var->sign=ZERO;
    
    
    //need to understand beter how all work

}
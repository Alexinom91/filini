#include "set_fil.h"


void set_fil_d(ptr_fil var, double input, const round ROUND )
{
    if(input>(double)0)
        var->sign=POSITIVE;
    if(input<(double)0)
        var->sign=NEGATIVE;
    if(input==(double)0)
        var->sign=ZERO;
    
    if(ROUND==R_DOWN)
    {
        //write a function to do it
    }
    if(ROUND==R_UP)
    {
        //write a function to do it
    }
    if(ROUND==R_TO_ZERO)
    {
        //write a function to do it
    }
    //need to understand beter how all work

}
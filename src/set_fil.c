#include "../include/set_fil.h"
void set_fil(ptr_fil var, srcptr_fil var2, const round_fil_type ROUND )
{
    
    if(var2->sign==EMPTY)
    {
        #warning "Warning, you are trying to set a variable that is not initialized"
    }
    else
    {
        if(var2->sign==POSITIVE)
            var->sign=POSITIVE;
        if(var2->sign==NEGATIVE)
            var->sign=NEGATIVE;
        if(var2->sign==ZERO)
            var->sign=ZERO;



        size_t length_bytes = (var->length + 7) / 8;
        memset(var->digits, 0, length_bytes);
        memcpy(var->digits, var2->digits, length_bytes);
        size_t length_bytes_2 = (var->length + 7) / 8;
        if(length_bytes==length_bytes_2)
        {
            if(var2->length==var->length)
            {
                var->expoent=var2->expoent;
                var->digits=var2->digits;
            }
            else
            {
                #warning "Warning, the length of the variable is different"
            }
        }
    }
    
}

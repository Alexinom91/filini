#include "../include/set_fil_d.h"


void set_fil_d(ptr_fil var, double input, const round_fil_type ROUND )
{   if(check_init_fil(var)==false)
    {   
        if(input>(double)0)
            var->sign=POSITIVE;
        if(input<(double)0)
            var->sign=NEGATIVE;
        if(input==(double)0)
            var->sign=ZERO;



        size_t length_bytes = (var->length + 7) / 8;   
        memset(var->digits, 0, length_bytes);
        
    

        
        
        var->digits=frexp(input, var->expoent);
    
    
        
        


            
        switch(ROUND)
        {
            case R_DOWN:
                //write a function to do it
                round_down_fil(&var);
                break;
            case R_UP:
                //arrotondamento per eccesso
                
                round_up_fil( &var);
                break;
            case R_TO_ZERO:
                //troncamento
                //non devo fare nulla
                
                break;
            default:
                #warning "Warning, the round is not valid"
                break;
        }
        
    }
    
    
    

    
}
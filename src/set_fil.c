#include "../include/set_fil.h"


void set_fil_d(ptr_fil var, double input, const round ROUND )
{   if(check_init_fil(var)==false)
    {
        if(input>(double)0)
            var->sign=POSITIVE;
        if(input<(double)0)
            var->sign=NEGATIVE;
        if(input==(double)0)
            var->sign=ZERO;
            
        
        //need to understand beter how all work
        size_t length_bytes = (var->length + 7) / 8;
        if(length_bytes>=sizeof(double))
        {
            
            memset(var->digits, 0, length_bytes);
            var->digits=flexp(input, var->expoent);
        }
        else
        {
            var->digits=flexp(input, var->expoent);
            


            
            switch(ROUND)
            {
                case R_DOWN:
                    //write a function to do it
                    var->flag=(var->expoent)>(length_bytes);
                    break;
                case R_UP:
                    //arrotondamento per eccesso
                    
                    for (size_t i = var->length; i > 0; i--) {
                        if (var->digits[i - 1] != ~0UL) { // Se non è tutto 1
                            var->digits[i - 1] += 1;
                            break;
                        } else {
                            var->digits[i - 1] = 0; // Propaga il riporto
                        }
                    }
                    
                   
                    var->flag=(var->expoent)>(length_bytes);
                    break;
                case R_TO_ZERO:
                    //troncamento
                    
                    var->flag=(var->expoent)>(length_bytes);
                    break;
                default:
                    #warning "Warning, the round is not valid"
                    break;
            }
        }
    }
    
    
    

    
}
#include "../include/set_fil_d.h"


void set_fil_d(ptr_fil var, double input, const round_fil_type ROUND )
{   if(check_init_fil(&var)==false)
    {   
        if(input>(double)0)
            var->sign=POSITIVE;
        if(input<(double)0)
            var->sign=NEGATIVE;
        if(input==(double)0)
            var->sign=ZERO;



        size_t length_bytes = (var->length + 7) / 8;   
        memset(var->digits, 0, length_bytes);
        
    

        int exp;
        double mantissa = frexp(input, &exp);

        // Scalare la mantissa e riempire i blocchi della mantissa
        size_t total_bits_filled = 0;
        for (size_t i = 0; i < var->length; ++i) {
            if (total_bits_filled >= var->length) {
                var->digits[i] = 0;
            } else {
                size_t bits_to_fill = sizeof(unsigned long) * 8;
                if (total_bits_filled + bits_to_fill > var->length) {
                    bits_to_fill = var->length - total_bits_filled;
                }
                
                mantissa *= (1UL << bits_to_fill);
                var->digits[i] = (unsigned long)mantissa;
                mantissa -= var->digits[i]; // Rimuove la parte intera
                total_bits_filled += bits_to_fill;
            }
        }
        var->expoent = exp;
    
    
        
        


            
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
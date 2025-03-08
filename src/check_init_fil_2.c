#include "../include/check_init_fil_2.h"
#include "../include/filini.h"
#include <stdbool.h>
bool check_init_fil_2(ptr_ptr_ptr_fil var)
{
    if((**var)->digits==NULL)
    {   
        
        fprintf(stderr, "the digits of the variable isn't intialized\n");
        
        return true;
    }
    else
    {
        return false;
    }
    
}
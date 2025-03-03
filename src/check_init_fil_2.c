#include "check_init_fil_2.h"
void check_init_fil_2(srcptr_fil **var)
{
    if((**var)->digits==NULL)
    {
        #warning    "Warning, the size of the variable isn't intialized" 
    }
    
}
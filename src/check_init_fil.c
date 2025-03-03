#include "../include/check_init_fil.h"

bool check_init_fil(srcptr_fil *var)
{
    if((*var)->digits==NULL)
    {
        #warning    "Warning, the size of the variable isn't intialized" 
        return true;
    }
    else
    {
        return false;
    }
}

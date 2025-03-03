#include "../include/check_init_fil.h"
#include "../include/filini.h"
#include <stdbool.h>

bool check_init_fil(ptr_ptr_fil var)
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

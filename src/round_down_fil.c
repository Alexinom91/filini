
#include "../include/round_down_fil.h"
#include "../include/filini.h"
#include <stdbool.h>
void round_down_fil(ptr_ptr_fil var)
{
    if (var == NULL || *var == NULL) {
        return; // Handle NULL pointers
    }

    if (check_init_fil_2(var) == false) {
        // Perform the round down operation
        (*var)->digits[0] &= ~((1UL << ((lent)((*var)->length - 1))) - 1);
    }
}